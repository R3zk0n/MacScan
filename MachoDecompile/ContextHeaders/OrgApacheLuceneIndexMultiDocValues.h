// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneIndexMultiDocValues : NSObject



-(id)init;
+(id)getNormValuesWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getNumericValuesWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getDocsWithFieldWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getBinaryValuesWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getSortedNumericValuesWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getSortedValuesWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;
+(id)getSortedSetValuesWithOrgApacheLuceneIndexIndexReader:(id)arg0 withNSString:(id)arg1 ;


@end


#endif