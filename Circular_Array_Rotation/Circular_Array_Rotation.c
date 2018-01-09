#!/bin/python

import sys

def circularArrayRotation(a, m):
    # Complete this function

if __name__ == "__main__":
    n, k, q = raw_input().strip().split(' ')
    n, k, q = [int(n), int(k), int(q)]
    a = map(int, raw_input().strip().split(' '))
    m = []
    m_i = 0
    for m_i in xrange(q):
        m_t = int(raw_input().strip())
        m.append(m_t)
    result = circularArrayRotation(a, m)
    print "\n".join(map(str, result))




