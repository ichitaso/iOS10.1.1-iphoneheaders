/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/PlugIns/Safari.wkbundle/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > {
	unsigned long long m_table;
	unsigned m_tableSize;
	unsigned m_tableSizeMask;
	unsigned m_keyCount;
	unsigned m_deletedCount;
} HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> >;

typedef struct HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> > {
	HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > m_impl;
} HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> >;

