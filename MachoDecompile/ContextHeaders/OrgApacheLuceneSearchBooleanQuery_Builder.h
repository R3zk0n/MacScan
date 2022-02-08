// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANQUERY_BUILDER_H
#define ORGAPACHELUCENESEARCHBOOLEANQUERY_BUILDER_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneSearchBooleanQuery_Builder : NSObject {
    BOOL disableCoord_;
    int minimumNumberShouldMatch_;
    id<JavaUtilList> *clauses_;
}




-(id)init;
-(id)setDisableCoordWithBoolean:(BOOL)arg0 ;
-(id)setMinimumNumberShouldMatchWithInt:(int)arg0 ;
-(id)addWithOrgApacheLuceneSearchBooleanClause:(id)arg0 ;
-(id)addWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchBooleanClause_OccurEnum:(id)arg1 ;
-(id)build;
-(void)dealloc;


@end


#endif