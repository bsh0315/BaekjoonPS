#include <iostream>
#include <cstring>

using namespace std;

char* Max(char* _Money, char* _People)
{
    for (int i = 0; i < static_cast<int>(strlen(_Money)); i++)
    {
        if (_Money[i] > _People[i])
        {
            return _Money;
        }
        else if (_Money[i] < _People[i])
        {
            return _People;
        }
    }

    return _Money;
}

void Subtract(char* _Money, char* _People)
{
    for (int i = 0; i < static_cast<int>(strlen(_People)); ++i)
    {
        _Money[i] = _Money[i] - _People[i] + '0';

        if (_Money[i] < '0')
        {
            _Money[i] += 10;
            --_Money[i - 1];
        }
    }

    for (int j = (static_cast<int>(strlen(_People)) - 1); j >= 0; --j)
    {
        if (_Money[j] < '0')
        {
            _Money[j] += 10;
            --_Money[j - 1];
        }
    }
}

void DevideSubtract(char* _Money, char* _People, char* _Result, int _Index)
{
    _Result[_Index] = '0';

    while (_Money[_Index - 1] > '0' || Max(_Money + _Index, _People) == _Money + _Index)
    {
        Subtract(_Money + _Index, _People);
        ++_Result[_Index];
    }
}

void Devide(char* _Money, char* _People, char* _Result)
{
    int Index = 0;
    int Digit = static_cast<int>(strlen(_Money)) - static_cast<int>(strlen(_People));

    while (Index <= Digit)
    {
        DevideSubtract(_Money, _People, _Result, Index);
        ++Index;
    }

    _Result[Index] = '\0';
}

int main(void)
{
    char Money[1001];
    char People[1001];
    char Result[1001];
    int R_Index = 0, M_Index = 0;

    cin >> Money >> People;

    Devide(Money, People, Result);

    while (Result[R_Index] == '0')
    {
        ++R_Index;
    }
    while (Money[M_Index] == '0')
    {
        ++M_Index;
    }

    if (Result[0] == '\0')
    {
        Result[0] = '0';
        Result[1] = '\0';
    }

    if (Money[M_Index] == '\0')
    {
        --M_Index;
    }

    if (Result[R_Index] == '\0')
    {
        --R_Index;
    }

    cout << Result + R_Index << endl;
    cout << Money + M_Index << endl;

    return 0;
}
