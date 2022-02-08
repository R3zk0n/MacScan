// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORERAMFILE_H
#define ORGAPACHELUCENESTORERAMFILE_H


#import <Foundation/Foundation.h>

#import "JavaUtilArrayList.h"
#import "OrgApacheLuceneStoreRAMDirectory.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneStoreRAMFile : NSObject <OrgApacheLuceneUtilAccountable>

 {
    JavaUtilArrayList *buffers_;
    NSInteger length_;
    OrgApacheLuceneStoreRAMDirectory *directory_;
    NSInteger sizeInBytes_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgApacheLuceneStoreRAMDirectory:(id)arg0 ;
-(NSInteger)getLength;
-(void)setLengthWithLong:(NSInteger)arg0 ;
-(id)addBufferWithInt:(int)arg0 ;
-(id)getBufferWithInt:(int)arg0 ;
-(int)numBuffers;
-(id)newBufferWithInt:(int)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif