// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDABSTRACTPAGEDMUTABLE_H
#define ORGAPACHELUCENEUTILPACKEDABSTRACTPAGEDMUTABLE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilLongValues.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPackedAbstractPagedMutable : OrgApacheLuceneUtilLongValues <OrgApacheLuceneUtilAccountable>

 {
    NSInteger size_;
    int pageShift_;
    int pageMask_;
    IOSObjectArray *subMutables_;
    int bitsPerValue_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)fillPages;
-(int)lastPageSizeWithLong:(NSInteger)arg0 ;
-(int)pageSize;
-(NSInteger)size;
-(int)pageIndexWithLong:(NSInteger)arg0 ;
-(int)indexInPageWithLong:(NSInteger)arg0 ;
-(NSInteger)getWithLong:(NSInteger)arg0 ;
-(void)setWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)baseRamBytesUsed;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(id)resizeWithLong:(NSInteger)arg0 ;
-(id)growWithLong:(NSInteger)arg0 ;
-(id)grow;
-(void)dealloc;


@end


#endif