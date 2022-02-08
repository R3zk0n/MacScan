// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFREQUENCYTRACKINGRINGBUFFER_INTBAG_H
#define ORGAPACHELUCENEUTILFREQUENCYTRACKINGRINGBUFFER_INTBAG_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilFrequencyTrackingRingBuffer_IntBag : NSObject <OrgApacheLuceneUtilAccountable>

 {
    IOSIntArray *keys_;
    IOSIntArray *freqs_;
    int mask_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(int)frequencyWithInt:(int)arg0 ;
-(int)addWithInt:(int)arg0 ;
-(BOOL)removeWithInt:(int)arg0 ;
-(void)relocateAdjacentKeysWithInt:(int)arg0 ;
-(id)asMap;
-(void)dealloc;
+(void)initialize;


@end


#endif