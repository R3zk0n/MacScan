// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORESINGLEINSTANCELOCKFACTORY_SINGLEINSTANCELOCK_H
#define ORGAPACHELUCENESTORESINGLEINSTANCELOCKFACTORY_SINGLEINSTANCELOCK_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreLock.h"
#import "OrgApacheLuceneStoreSingleInstanceLockFactory.h"

@interface OrgApacheLuceneStoreSingleInstanceLockFactory_SingleInstanceLock : OrgApacheLuceneStoreLock {
    OrgApacheLuceneStoreSingleInstanceLockFactory *this$0_;
    NSString *lockName_;
    uint8_t closed_;
}




-(id)initWithOrgApacheLuceneStoreSingleInstanceLockFactory:(id)arg0 withNSString:(id)arg1 ;
-(void)ensureValid;
-(void)close;
-(id)description;
-(void)dealloc;


@end


#endif