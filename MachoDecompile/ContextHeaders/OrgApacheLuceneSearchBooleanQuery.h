// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANQUERY_H
#define ORGAPACHELUCENESEARCHBOOLEANQUERY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQuery.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneSearchBooleanQuery : OrgApacheLuceneSearchQuery <JavaLangIterable>

 {
    BOOL mutable__;
    BOOL disableCoord_;
    int minimumNumberShouldMatch_;
    id<JavaUtilList> *clauses_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBoolean:(BOOL)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchBooleanClauseArray:(id)arg2 ;
-(BOOL)isCoordDisabled;
-(int)getMinimumNumberShouldMatch;
-(id)clauses;
-(id)iterator;
-(id)rewriteNoScoring;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)getClauses;
-(id)clone;
-(id)init;
-(id)initWithBoolean:(BOOL)arg0 ;
-(void)ensureMutableWithNSString:(id)arg0 ;
-(void)setMinimumNumberShouldMatchWithInt:(int)arg0 ;
-(void)addWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchBooleanClause_OccurEnum:(id)arg1 ;
-(void)addWithOrgApacheLuceneSearchBooleanClause:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(int)getMaxClauseCount;
+(void)setMaxClauseCountWithInt:(int)arg0 ;


@end


#endif