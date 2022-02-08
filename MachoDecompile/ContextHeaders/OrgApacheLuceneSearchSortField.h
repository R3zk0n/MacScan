// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSORTFIELD_H
#define ORGAPACHELUCENESEARCHSORTFIELD_H

@class OrgApacheLuceneSearchFieldComparatorSource;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchSortField_TypeEnum.h"
#import "JavaUtilComparator-Protocol.h"

@interface OrgApacheLuceneSearchSortField : NSObject {
    BOOL reverse_;
    id *missingValue_;
    NSString *field_;
    OrgApacheLuceneSearchSortField_TypeEnum *type_;
    OrgApacheLuceneSearchFieldComparatorSource *comparatorSource_;
    id<JavaUtilComparator> *bytesComparator_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneSearchSortField_TypeEnum:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneSearchSortField_TypeEnum:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)setMissingValueWithId:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneSearchFieldComparatorSource:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneSearchFieldComparatorSource:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)initFieldTypeWithNSString:(id)arg0 withOrgApacheLuceneSearchSortField_TypeEnum:(id)arg1 ;
-(id)getField;
-(id)getType;
-(BOOL)getReverse;
-(id)getComparatorSource;
-(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)setBytesComparatorWithJavaUtilComparator:(id)arg0 ;
-(id)getBytesComparator;
-(id)getComparatorWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)rewriteWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 ;
-(BOOL)needsScores;
-(void)dealloc;
+(void)initialize;


@end


#endif