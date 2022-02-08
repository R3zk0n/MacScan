// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILSPINDLEARRAY_STATE_H
#define COMAPPLECONTEXTKITUTILSPINDLEARRAY_STATE_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"

@interface ComAppleContextkitUtilSpindleArray_State : NSObject {
    IOSByteArray *compressedBuf_;
    IOSByteArray *uncompressedBuf_;
}




-(id)init;
-(id)compressedBufWithInt:(int)arg0 ;
-(id)uncompressedBufWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif