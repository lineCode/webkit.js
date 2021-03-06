/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSDOMCoreException_h
#define JSDOMCoreException_h

#include "DOMCoreException.h"
#include "JSDOMBinding.h"
#include <runtime/ErrorPrototype.h>
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>

namespace WebCore {

class JSDOMCoreException : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSDOMCoreException* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMCoreException> impl)
    {
        JSDOMCoreException* ptr = new (NotNull, JSC::allocateCell<JSDOMCoreException>(globalObject->vm().heap)) JSDOMCoreException(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSDOMCoreException();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    DOMCoreException& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    DOMCoreException* m_impl;
protected:
    JSDOMCoreException(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DOMCoreException>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSDOMCoreExceptionOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, DOMCoreException*)
{
    DEFINE_STATIC_LOCAL(JSDOMCoreExceptionOwner, jsDOMCoreExceptionOwner, ());
    return &jsDOMCoreExceptionOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, DOMCoreException*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, DOMCoreException*);
DOMCoreException* toDOMCoreException(JSC::JSValue);

class JSDOMCoreExceptionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSDOMCoreExceptionPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMCoreExceptionPrototype* ptr = new (NotNull, JSC::allocateCell<JSDOMCoreExceptionPrototype>(vm.heap)) JSDOMCoreExceptionPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDOMCoreExceptionPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSDOMCoreExceptionConstructor : public DOMConstructorObject {
private:
    JSDOMCoreExceptionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDOMCoreExceptionConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDOMCoreExceptionConstructor* ptr = new (NotNull, JSC::allocateCell<JSDOMCoreExceptionConstructor>(vm.heap)) JSDOMCoreExceptionConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMCoreExceptionPrototypeFunctionToString(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsDOMCoreExceptionCode(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionName(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionMessage(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
// Constants

JSC::EncodedJSValue jsDOMCoreExceptionINDEX_SIZE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionDOMSTRING_SIZE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionHIERARCHY_REQUEST_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionWRONG_DOCUMENT_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionINVALID_CHARACTER_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionNO_DATA_ALLOWED_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionNO_MODIFICATION_ALLOWED_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionNOT_FOUND_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionNOT_SUPPORTED_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionINUSE_ATTRIBUTE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionINVALID_STATE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionSYNTAX_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionINVALID_MODIFICATION_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionNAMESPACE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionINVALID_ACCESS_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionVALIDATION_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionTYPE_MISMATCH_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionSECURITY_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionNETWORK_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionABORT_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionURL_MISMATCH_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionQUOTA_EXCEEDED_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionTIMEOUT_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionINVALID_NODE_TYPE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMCoreExceptionDATA_CLONE_ERR(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif
