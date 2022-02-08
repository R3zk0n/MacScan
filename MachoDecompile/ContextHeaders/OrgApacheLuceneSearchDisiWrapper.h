// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISIWRAPPER_H
#define ORGAPACHELUCENESEARCHDISIWRAPPER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "OrgApacheLuceneSearchDisiWrapper.h"
#import "OrgApacheLuceneSearchTwoPhaseIterator.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneSearchDisiWrapper : NSObject <AutoreleaseLiteSupport>

 {
    OrgApacheLuceneSearchDocIdSetIterator *iterator_;
    NSInteger cost_;
    int doc_;
    OrgApacheLuceneSearchDisiWrapper *next_;
    OrgApacheLuceneSearchDocIdSetIterator *approximation_;
    OrgApacheLuceneSearchTwoPhaseIterator *twoPhaseView_;
    int lastApproxMatchDoc_;
    int lastApproxNonMatchDoc_;
    uint8_t _autoreleaseLiteLastPoolId;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)dealloc;


@end


#endif