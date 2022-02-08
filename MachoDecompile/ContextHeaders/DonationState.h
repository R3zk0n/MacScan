// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef DONATIONSTATE_H
#define DONATIONSTATE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface DonationState : NSObject

@property (retain, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (nonatomic) char balancedMarkIncomplete; // ivar: _balancedMarkIncomplete
@property (retain, nonatomic) NSMutableArray *donations; // ivar: _donations
@property (readonly, nonatomic) NSArray *donorBundleIdentifiers;


-(id)init;


@end


#endif