// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_SEGMENTMAP_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_SEGMENTMAP_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneIndexMultiDocValues_OrdinalMap_SegmentMap : NSObject <OrgApacheLuceneUtilAccountable>

 {
    IOSIntArray *newToOld_;
    IOSIntArray *oldToNew_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLongArray:(id)arg0 ;
-(int)newToOldWithInt:(int)arg0 ;
-(int)oldToNewWithInt:(int)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
+(void)initialize;


@end


#endif