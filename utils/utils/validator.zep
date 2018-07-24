namespace Utils;

class Validator
{
    public static function isInteger(var num) -> bool
    {
        return is_int(num) || ctype_digit(ltrim(num, '-'));
    }
}
