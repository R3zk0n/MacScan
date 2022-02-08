// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILOBJCSPINDLEARRAY_NATIVESTATE_H
#define COMAPPLECONTEXTKITUTILOBJCSPINDLEARRAY_NATIVESTATE_H

@class State;



@interface ComAppleContextkitUtilObjcSpindleArray_NativeState : State {
    *void _dstBuffer;
    *void _scratchBuffer;
}




-(void)dealloc;
-(id)init;
-(void)initBuffers;
-(int)decodeWithInt:(int)arg0 withByteArray:(id)arg1 withByteArray:(id)arg2 ;
-(int)decodeInternalWithInt:(int)arg0 withByteArray:(id)arg1 withByteArray:(id)arg2 ;


@end


#endif