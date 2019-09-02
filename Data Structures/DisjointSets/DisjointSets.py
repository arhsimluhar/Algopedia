class DisjointSet:
    def __init__(self, n):
        '''
        initialises set of n elements
        each elements constitutes its own
        set
        :param n:
        '''
        self.size = n
        self.list = [i for i in range(self.size)]

    def find(self, x):
        '''
        Complexity: O(1)
        :return set name for the element x
        :param x:
        :return: self.list[x]
        '''
        return self.list[x]

    def union(self, x, y):

        """
        Complexity: O(n)
        deletes the set containing x and y
        and creates a new set which is union
        sets containing x and y
        :param x:
        :param y:
        :return: None
        """
        rootX = self.find(x)
        rootY = self.find(y)
        if rootY == rootX:
            return
        for i in range(self.size):
            if self.list[i] == x:
                self.list[i] = y

    def __str__(self):
        '''

        :return: string representation of sets
        '''
        return str(self.list)


class DisjointSetQuickUnion(DisjointSet):
    def __init__(self, n):
        '''
        same as DisjointSet init function
        :param n:
        '''
        DisjointSet.__init__(self, n)

    def find(self, x):
        """
        Complexity: O(n)
        we iterative go up  until we find the
        root node the element x
        :param x:
        :return:
        """
        while self.list[x] != x:
            x = self.list[x]
        return x

    def union(self, x, y):
        """
        Complexity: O(1)
        adds the root element of set containing X
        to the root of set containing y, though
        this may lead to skew trees hence this should
        be avoided
        :param x:
        :param y:
        :return:
        """
        rootX = self.find(x)
        rootY = self.find(y)

        if rootX == rootY:
            return
        rootX = self.find(x)
        self.list[rootX] = y


class DisjointSetQuickUnionbySizeQuickFind:

    def __init__(self, n):
        self.size = n
        self.setSize = [1 for i in range(n)]
        self.list = [i for i in range(n)]

    def find(self, x):
        """
        Complexity: O(log(n))
        we iterative go up  until we find the
        root node the element x, avoid creating
        skew trees
        :param x:
        :return:
        """
        while self.list[x] != x:
            x = self.list[x]
        return x

    def union(self, x, y):
        rootX = self.find(x)
        rootY = self.find(y)

        if rootX == rootY:
            return
        if self.setSize[rootX] > self.setSize[rootY]:
            self.list[rootY] = rootX
            self.setSize[rootX] += self.setSize[rootY]
        else:
            self.list[rootX] = rootY
            self.setSize[rootY] += self.setSize[rootX]

    def __str__(self):
        return str(self.list)


class DisjointSetQuickUnionbyHeightQuickFind:

    def __init__(self, n):
        self.size = n
        self.height = [0 for i in range(n)]
        self.list = [i for i in range(n)]

    def find(self, x):
        """
        Complexity: O(log(n))
        we iterative go up  until we find the
        root node the element x
        :param x:
        :return:
        """
        while self.list[x] != x:
            x = self.list[x]
        return x

    def union(self, x, y):
        """
        complexity: O(1 + log(n))
        does a union making smaller height
        tree to be the child to larger tree
        :param x:
        :param y:
        :return:
        """
        rootX = self.find(x)
        rootY = self.find(y)

        if rootX == rootY:
            return
        if self.height[rootX] > self.height[rootY]:
            self.list[rootY] = rootX
        elif self.height[rootX] < self.height[rootY]:
            self.list[rootX] = rootY
        else:
            self.list[rootX] = rootY
            self.height[rootY] += 1

    def __str__(self):
        return str(self.list)


class DisjointSetQuickUnionbySizePathCompression(DisjointSetQuickUnionbySizeQuickFind):
    def __init__(self,n):
        super().__init__(n)

    def find(self, x):
        """
        complexity: iterative log(n)
        Applying path compression here.
        :param x:
        :return:
        """
        if x != self.list[x]:
            self.list[x] = self.find(self.list[x])
        return self.list[x]


T = DisjointSetQuickUnionbySizePathCompression(10)

print(T)
print(T.find(2))
T.union(1, 2)
T.union(2, 3)
print(T)
print(T.find(2))

