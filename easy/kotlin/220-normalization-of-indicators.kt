import kotlin.math.abs

fun main() {
    val canonical = readln().toInt()
        .let {
        readln().split(" ")
            .map { it.toInt() }
            .sorted()
    }

    generateSequence { readlnOrNull() }
        .drop(1)
        .map { it.toInt() }
        .map { findClosestTo(canonical, it) }
        .forEach(::println)
}

fun findClosestTo(list: List<Int>, target: Int): Int {
    val index = list.binarySearch(target).let { if (it >= 0) it else -it - 1 }
    return listOfNotNull(
        list.getOrNull(index),
        list.getOrNull(index - 1)
    ).minByOrNull { abs(it - target) } ?: list.first()
}