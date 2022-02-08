// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILATTRIBUTESOURCE_STATE_H
#define ORGAPACHELUCENEUTILATTRIBUTESOURCE_STATE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAttributeImpl.h"
#import "OrgApacheLuceneUtilAttributeSource_State.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneUtilAttributeSource_State : NSObject <NSCopying>

 {
    OrgApacheLuceneUtilAttributeImpl *attribute_;
    OrgApacheLuceneUtilAttributeSource_State *next_;
}




-(id)clone;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif