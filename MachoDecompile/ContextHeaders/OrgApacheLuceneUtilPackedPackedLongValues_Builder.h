// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDLONGVALUES_BUILDER_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDLONGVALUES_BUILDER_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPackedPackedLongValues_Builder : NSObject <OrgApacheLuceneUtilAccountable>

 {
    int pageShift_;
    int pageMask_;
    float acceptableOverheadRatio_;
    IOSLongArray *pending_;
    NSInteger size_;
    IOSObjectArray *values_;
    NSInteger ramBytesUsed_;
    int valuesOff_;
    int pendingOff_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)build;
-(NSInteger)baseRamBytesUsed;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(NSInteger)size;
-(id)addWithLong:(NSInteger)arg0 ;
-(void)finish;
-(void)pack;
-(void)packWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
-(void)growWithInt:(int)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif