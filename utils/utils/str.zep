namespace Utils;

class Str
{
    protected static lengthCache;

    public static function length(string str, var encoding = "utf8")
    {
	var cacheKey = implode(':', [str, encoding]);
	if isset(self::lengthCache[cacheKey]) {
		return self::lengthCache[cacheKey];
	}

	var length = mb_strlen(str, encoding);
	
	if length <= 1000 {
		var length_cache_count = count(self::lengthCache);
		if length_cache_count >= 1000 {
			let self::lengthCache = array_slice(
                    		self::lengthCache,
                    		length_cache_count - 500,
                    		null,
                    		true
                	);
		}

		let self::lengthCache[cacheKey] = length;
	}

        return length;
    }
}

