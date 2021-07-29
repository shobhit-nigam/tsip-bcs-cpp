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

  int& operator[](int ix)
  {
    assert(ix >=0 && ix < len);
    return val[ix];
  }
  int getLength() const
  {
    return len;
  }
};
