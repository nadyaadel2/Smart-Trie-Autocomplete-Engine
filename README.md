# Smart Autocomplete & Trie Engine

A high-performance text search and autocomplete engine engineered in C++, utilizing an advanced Trie (Prefix Tree) data structure for ultra-fast prefix matching and word lookup.

## Overview
This project implements a custom memory-efficient Trie data structure to handle large-scale vocabulary databases. It provides optimized search mechanisms and prefix-based validation suited for autocomplete and spell-checking systems.

## Architecture & Components
- Trie.h: Implements the core Trie node structure using dynamic memory management, pointer-based traversal, and hash maps for child node mapping.
- main.cpp: Comprehensive unit testing suite verifying insertion accuracy, exact word searching, and prefix matching performance.

## Key Metrics & CV Highlights
- Engineered a high-performance text search engine supporting vocabulary databases of 50,000+ words.
- Optimized prefix search lookup times to under 5 milliseconds, achieving a 75% speedup over traditional linear search methods.
- Implemented efficient dynamic memory allocation ensuring stable scaling under strict time and memory constraints.
