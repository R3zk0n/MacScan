// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_QIDCOUNTPQ_H
#define COMAPPLECONTEXTKITCATEGORIESCONSTELLATION_REQUEST_QIDCOUNTPQ_H



#import "OrgApacheLuceneUtilPriorityQueue.h"
#import "ComAppleContextkitCategoriesConstellation_Request.h"

@interface ComAppleContextkitCategoriesConstellation_Request_QIDCountPQ : OrgApacheLuceneUtilPriorityQueue {
    ComAppleContextkitCategoriesConstellation_Request *this$0_;
}




-(id)initWithComAppleContextkitCategoriesConstellation_Request:(id)arg0 withInt:(int)arg1 ;
-(BOOL)lessThanWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)betterThanWithComAppleContextkitCategoriesConstellation_QIDCount:(id)arg0 withComAppleContextkitCategoriesConstellation_QIDCount:(id)arg1 ;
-(id)popAllCountsFromArray;
-(void)addItemWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif