// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef REQUESTTRANSACTION_H
#define REQUESTTRANSACTION_H

@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface RequestTransaction : NSObject {
    NSObject<OS_os_transaction> *_tx;
}




-(id)initWithTransactionId:(id)arg0 decPending:(char)arg1 ;
-(void)dealloc;


@end


#endif