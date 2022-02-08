// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSIntArray.h"
#import "ComAppleContextkitCategoriesConstellation.h"
#import "OrgApacheLuceneStoreIndexInput.h"

@interface ComAppleContextkitCategoriesConstellation_Request : NSObject {
    IOSObjectArray *seenQids_;
    IOSIntArray *seenOrder_;
    IOSIntArray *qidWeights_;
    IOSIntArray *qidCounts_;
    int maxCategoriesFirstRun_;
    int maxCategories_;
    int minQidCount_;
    int minWeight_;
    int maxQids_;
    ComAppleContextkitCategoriesConstellation *this$0_;
    int seenCounter_;
    OrgApacheLuceneStoreIndexInput *in_;
}




-(id)initWithComAppleContextkitCategoriesConstellation:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(id)newQIDContainer;
-(BOOL)hasEntriesForQIDWithNSString:(id)arg0 ;
-(void)prepareItemsWithComAppleContextkitCategoriesConstellation_Request_QIDCountPQ:(id)arg0 ;
-(id)getTopKCategoriesWithInt:(int)arg0 ;
-(void)trimCounts;
-(void)clearCountsAndWeightsForCategoryWithInt:(int)arg0 ;
-(void)incrementCountsAndWeightsWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilSet:(id)arg2 ;
-(int)categoryIdToOffsetWithInt:(int)arg0 ;
-(int)highlevelThemeForCategoryIdWithInt:(int)arg0 ;
-(BOOL)iterateAncestorsForCategoryIdWithInt:(int)arg0 withComAppleContextkitCategoriesConstellation_AncestorConsumer:(id)arg1 ;
-(void)subtractAncestorCounts;
-(id)trimMatches;
-(void)addValueToKeyWithJavaUtilMap:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif