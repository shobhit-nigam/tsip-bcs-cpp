#include<cassert>

class ArrayInt
{
private:
  int len{};
  int *val;
public:
  ArrayInt() = default;

  ArrayInt(int length): len{length}
  {
    assert(length >= 0);
    if (length > 0)
    {
      val = new int[length]{};
    }
  }
  ~ArrayInt()
  {
    delete[] val;
  }

  void empty()
  {
    delete [] val;
    val = nullptr;
    len = 0;
  }
  void reallocate(int newLength)
  {
    // erase exisiting elements
    empty();

    // is it resizing to an empty array
    if (newLength <= 0)
    {
      empty();
      return;
    }
    val = new int[newLength];
    len = newLength;
  }

  void resize(int newLength)
  {
    // already same length
    if (newLength == len)
    {
      return;
    }
    // is it resizing to an empty array
    if (newLength <= 0)
    {
      empty();
      return;
    }
    int *value{new int[newLength]};
    if (len>0)
    {
      int numValuesToCopy {0};
      numValuesToCopy = (newLength > len) ? len:newLength;
      // make the copy
      for (int ix{0}; ix < numValuesToCopy; ++ix)
      {
        value[ix] = val[ix];
      }
      delete[] val;
      val = value;
      len = newLength;
    }
  }
  void insert(int newValue, int ix)
  {
    assert(ix >= 0 && ix <= len);

    // create a new array (size larger than previous array)
    int *data {new int[len+1]};

    // copy all elements upto the index
    for (int prev{0}; prev<ix; ++prev)
    {
      data[prev] = val[prev];
    }

    // insert the new elements
    data[ix] = newValue;

    for (int after{ix}; after<len; ++after)
    {
      data[after+1] = val[after];
    }
    delete[] val;
    val = data;
    ++len;

  }

  int& operator[](int ix)
  {
    assert(ix >=0 && ix < len);
    return val[ix];
  }
  int getLength() const
  {
    return len;
  }
  // remove
  // 

};
