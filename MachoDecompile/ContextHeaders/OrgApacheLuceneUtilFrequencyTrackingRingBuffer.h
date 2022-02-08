// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFREQUENCYTRACKINGRINGBUFFER_H
#define ORGAPACHELUCENEUTILFREQUENCYTRACKINGRINGBUFFER_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilFrequencyTrackingRingBuffer_IntBag.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilFrequencyTrackingRingBuffer : NSObject <OrgApacheLuceneUtilAccountable>

 {
    int maxSize_;
    IOSIntArray *buffer_;
    int position_;
    OrgApacheLuceneUtilFrequencyTrackingRingBuffer_IntBag *frequencies_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)addWithInt:(int)arg0 ;
-(int)frequencyWithInt:(int)arg0 ;
-(id)asFrequencyMap;
-(void)dealloc;
+(void)initialize;


@end


#endif