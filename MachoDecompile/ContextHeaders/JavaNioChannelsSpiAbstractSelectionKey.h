// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPIABSTRACTSELECTIONKEY_H
#define JAVANIOCHANNELSSPIABSTRACTSELECTIONKEY_H



#import "JavaNioChannelsSelectionKey.h"

@interface JavaNioChannelsSpiAbstractSelectionKey : JavaNioChannelsSelectionKey {
    BOOL isValid_;
}




-(id)init;
-(BOOL)isValid;
-(void)cancel;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif