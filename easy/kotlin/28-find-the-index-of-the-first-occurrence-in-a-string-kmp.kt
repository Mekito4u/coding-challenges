fun buildLps(p: String): IntArray {
        val m = p.length
        val lps = IntArray(m)
        var len = 0
        var i = 1

        while (i < m) {
            if (p[i] == p[len]) {
                len++
                lps[i] = len
                i++
            } else if (len > 0) {
                len = lps[len - 1]
            } else {
                lps[i] = 0
                i++
            }
        }
        return lps
    }

    fun strStr(haystack: String, needle: String): Int {
        val n = haystack.length
        val m = needle.length
        if (m == 0) return 0
        if (m > n) return -1

        val lps = buildLps(needle)
        var i = 0
        var j = 0

        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++
                j++
                if(j == m) return i - m
            } else if (j > 0){
                j = lps[j - 1]
            } else {
                i++
            }
        }
        return -1
    }