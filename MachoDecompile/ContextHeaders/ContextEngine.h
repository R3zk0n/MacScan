// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef CONTEXTENGINE_H
#define CONTEXTENGINE_H


#import <Foundation/Foundation.h>

#import "ContextConfiguration.h"

@interface ContextEngine : NSObject

@property (retain, nonatomic) ContextConfiguration *config; // ivar: _config


-(void)findResultsForRequest:(id)arg0 withReply:(id)arg1 ;
-(void)updateConfiguration;
-(void)updateConfigurationWithConfig:(id)arg0 ;
-(id)debugStatus;
-(id)indexId;
-(char)disabled;
-(char)stillWarmingUp;
-(id)warmUpDatPath;
+(id)dummyInstance;


@end


#endif