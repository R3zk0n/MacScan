// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXDOCVALUES_H
#define ORGAPACHELUCENEINDEXDOCVALUES_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneIndexDocValues : NSObject



-(id)init;
+(id)emptyBinary;
+(id)emptyNumeric;
+(id)emptySorted;
+(id)emptySortedNumericWithInt:(int)arg0 ;
+(id)emptySortedSet;
+(id)singletonWithOrgApacheLuceneIndexSortedDocValues:(id)arg0 ;
+(id)unwrapSingletonWithOrgApacheLuceneIndexSortedSetDocValues:(id)arg0 ;
+(id)unwrapSingletonWithOrgApacheLuceneIndexSortedNumericDocValues:(id)arg0 ;
+(id)unwrapSingletonBitsWithOrgApacheLuceneIndexSortedNumericDocValues:(id)arg0 ;
+(id)singletonWithOrgApacheLuceneIndexNumericDocValues:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 ;
+(id)docsWithValueWithOrgApacheLuceneIndexSortedDocValues:(id)arg0 withInt:(int)arg1 ;
+(id)docsWithValueWithOrgApacheLuceneIndexSortedSetDocValues:(id)arg0 withInt:(int)arg1 ;
+(id)docsWithValueWithOrgApacheLuceneIndexSortedNumericDocValues:(id)arg0 withInt:(int)arg1 ;
+(id)getNumericWithOrgApacheLuceneIndexLeafReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getBinaryWithOrgApacheLuceneIndexLeafReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getSortedWithOrgApacheLuceneIndexLeafReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getSortedNumericWithOrgApacheLuceneIndexLeafReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getSortedSetWithOrgApacheLuceneIndexLeafReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getDocsWithFieldWithOrgApacheLuceneIndexLeafReader:(id)arg0 withNSString:(id)arg1 ;


@end


#endif