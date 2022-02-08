// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDMONOTONICLONGVALUES_BUILDER_H
#define ORGAPACHELUCENEUTILPACKEDMONOTONICLONGVALUES_BUILDER_H

@class Builder;


#import "IOSFloatArray.h"

@interface OrgApacheLuceneUtilPackedMonotonicLongValues_Builder : Builder {
    IOSFloatArray *averages_;
}




-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(NSInteger)baseRamBytesUsed;
-(id)build;
-(void)packWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
-(void)growWithInt:(int)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif