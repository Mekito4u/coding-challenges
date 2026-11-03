fun strStr(haystack: String, needle: String): Int {
    val h_len = haystack.length
    val n_len = needle.length
    for (i in 0..h_len - n_len) {
        if(haystack.substring(i, i + n_len) == needle){
            return i
        }
    }
    return -1
}