// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHINDEXSEARCHER_$4_H
#define ORGAPACHELUCENESEARCHINDEXSEARCHER_$4_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchSort.h"
#import "OrgApacheLuceneSearchFieldDoc.h"
#import "OrgApacheLuceneSearchCollectorManager-Protocol.h"

@interface OrgApacheLuceneSearchIndexSearcher_$4 : NSObject <OrgApacheLuceneSearchCollectorManager>

 {
    OrgApacheLuceneSearchSort *val$sort_;
    int val$cappedNumHits_;
    OrgApacheLuceneSearchFieldDoc *val$after_;
    BOOL val$doDocScores_;
    BOOL val$doMaxScore_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)newCollector;
-(id)reduceWithJavaUtilCollection:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchSort:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchFieldDoc:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif