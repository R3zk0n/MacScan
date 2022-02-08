// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBYTESREF_H
#define ORGAPACHELUCENEUTILBYTESREF_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "AutoreleaseLiteSupport-Protocol.h"
#import "JavaLangComparable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneUtilBytesRef : NSObject <AutoreleaseLiteSupport, JavaLangComparable, NSCopying>

 {
    IOSByteArray *bytes_;
    int offset_;
    int length_;
    uint8_t _autoreleaseLiteLastPoolId;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)autorelease;
-(id)init;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithByteArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaLangCharSequence:(id)arg0 ;
-(BOOL)bytesEqualsWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)utf8ToString;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isValid;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getUTF8SortedAsUnicodeComparator;
+(id)getUTF8SortedAsUTF16Comparator;
+(id)deepCopyOfWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(void)initialize;


@end


#endif