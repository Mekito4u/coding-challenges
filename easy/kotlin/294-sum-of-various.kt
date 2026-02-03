fun main() {
    run {
        readln()
        readln().split(" ")
            .map { it.toLong() }
            .toSet()
            .sum()
            .also { println(it) }
    }
}