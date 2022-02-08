// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORERAMDIRECTORY_H
#define ORGAPACHELUCENESTORERAMDIRECTORY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreBaseDirectory.h"
#import "JavaUtilConcurrentAtomicAtomicLong.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneStoreRAMDirectory : OrgApacheLuceneStoreBaseDirectory <OrgApacheLuceneUtilAccountable>

 {
    id<JavaUtilMap> *fileMap_;
    JavaUtilConcurrentAtomicAtomicLong *sizeInBytes_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgApacheLuceneStoreLockFactory:(id)arg0 ;
-(id)initWithOrgApacheLuceneStoreFSDirectory:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)initWithOrgApacheLuceneStoreFSDirectory:(id)arg0 withBoolean:(BOOL)arg1 withOrgApacheLuceneStoreIOContext:(id)arg2 ;
-(id)listAll;
-(BOOL)fileNameExistsWithNSString:(id)arg0 ;
-(NSInteger)fileLengthWithNSString:(id)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)deleteFileWithNSString:(id)arg0 ;
-(id)createOutputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)newRAMFile;
-(void)syncWithJavaUtilCollection:(id)arg0 ;
-(void)renameFileWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)openInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)close;
-(void)dealloc;


@end


#endif