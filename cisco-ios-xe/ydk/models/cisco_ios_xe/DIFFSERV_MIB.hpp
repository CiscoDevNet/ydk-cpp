#ifndef _DIFFSERV_MIB_
#define _DIFFSERV_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace ydk {
namespace DIFFSERV_MIB {

class DiffservtbparamtrtcmblindIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamtrtcmblindIdentity();
        ~DiffservtbparamtrtcmblindIdentity();


}; // DiffservtbparamtrtcmblindIdentity

class DiffservschedulerwfqIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservschedulerwfqIdentity();
        ~DiffservschedulerwfqIdentity();


}; // DiffservschedulerwfqIdentity

class DiffservtbparamtswtcmIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamtswtcmIdentity();
        ~DiffservtbparamtswtcmIdentity();


}; // DiffservtbparamtswtcmIdentity

class DiffservtbparamavgrateIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamavgrateIdentity();
        ~DiffservtbparamavgrateIdentity();


}; // DiffservtbparamavgrateIdentity

class DiffservschedulerwrrIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservschedulerwrrIdentity();
        ~DiffservschedulerwrrIdentity();


}; // DiffservschedulerwrrIdentity

class DiffservtbparamsrtcmawareIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamsrtcmawareIdentity();
        ~DiffservtbparamsrtcmawareIdentity();


}; // DiffservtbparamsrtcmawareIdentity

class DiffservtbparamsrtcmblindIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamsrtcmblindIdentity();
        ~DiffservtbparamsrtcmblindIdentity();


}; // DiffservtbparamsrtcmblindIdentity

class DiffservtbparamsimpletokenbucketIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamsimpletokenbucketIdentity();
        ~DiffservtbparamsimpletokenbucketIdentity();


}; // DiffservtbparamsimpletokenbucketIdentity

class DiffservschedulerpriorityIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservschedulerpriorityIdentity();
        ~DiffservschedulerpriorityIdentity();


}; // DiffservschedulerpriorityIdentity

class DiffservtbparamtrtcmawareIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        DiffservtbparamtrtcmawareIdentity();
        ~DiffservtbparamtrtcmawareIdentity();


}; // DiffservtbparamtrtcmawareIdentity

class DiffservMib : public Entity
{
    public:
        DiffservMib();
        ~DiffservMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Diffservclassifier; //type: DiffservMib::Diffservclassifier
        class Diffservmeter; //type: DiffservMib::Diffservmeter
        class Diffservtbparam; //type: DiffservMib::Diffservtbparam
        class Diffservaction; //type: DiffservMib::Diffservaction
        class Diffservalgdrop; //type: DiffservMib::Diffservalgdrop
        class Diffservqueue; //type: DiffservMib::Diffservqueue
        class Diffservscheduler; //type: DiffservMib::Diffservscheduler
        class Diffservdatapathtable; //type: DiffservMib::Diffservdatapathtable
        class Diffservclfrtable; //type: DiffservMib::Diffservclfrtable
        class Diffservclfrelementtable; //type: DiffservMib::Diffservclfrelementtable
        class Diffservmultifieldclfrtable; //type: DiffservMib::Diffservmultifieldclfrtable
        class Diffservmetertable; //type: DiffservMib::Diffservmetertable
        class Diffservtbparamtable; //type: DiffservMib::Diffservtbparamtable
        class Diffservactiontable; //type: DiffservMib::Diffservactiontable
        class Diffservdscpmarkacttable; //type: DiffservMib::Diffservdscpmarkacttable
        class Diffservcountacttable; //type: DiffservMib::Diffservcountacttable
        class Diffservalgdroptable; //type: DiffservMib::Diffservalgdroptable
        class Diffservrandomdroptable; //type: DiffservMib::Diffservrandomdroptable
        class Diffservqtable; //type: DiffservMib::Diffservqtable
        class Diffservschedulertable; //type: DiffservMib::Diffservschedulertable
        class Diffservminratetable; //type: DiffservMib::Diffservminratetable
        class Diffservmaxratetable; //type: DiffservMib::Diffservmaxratetable

        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservaction> diffservaction;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservactiontable> diffservactiontable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservalgdrop> diffservalgdrop;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservalgdroptable> diffservalgdroptable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclassifier> diffservclassifier;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclfrelementtable> diffservclfrelementtable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclfrtable> diffservclfrtable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservcountacttable> diffservcountacttable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservdatapathtable> diffservdatapathtable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservdscpmarkacttable> diffservdscpmarkacttable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmaxratetable> diffservmaxratetable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmeter> diffservmeter;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmetertable> diffservmetertable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservminratetable> diffservminratetable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmultifieldclfrtable> diffservmultifieldclfrtable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservqtable> diffservqtable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservqueue> diffservqueue;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservrandomdroptable> diffservrandomdroptable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservscheduler> diffservscheduler;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservschedulertable> diffservschedulertable;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservtbparam> diffservtbparam;
        std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservtbparamtable> diffservtbparamtable;
        
}; // DiffservMib


class DiffservMib::Diffservclassifier : public Entity
{
    public:
        Diffservclassifier();
        ~Diffservclassifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservclfrnextfree; //type: uint32
        YLeaf diffservclfrelementnextfree; //type: uint32
        YLeaf diffservmultifieldclfrnextfree; //type: uint32

}; // DiffservMib::Diffservclassifier


class DiffservMib::Diffservmeter : public Entity
{
    public:
        Diffservmeter();
        ~Diffservmeter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservmeternextfree; //type: uint32

}; // DiffservMib::Diffservmeter


class DiffservMib::Diffservtbparam : public Entity
{
    public:
        Diffservtbparam();
        ~Diffservtbparam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservtbparamnextfree; //type: uint32

}; // DiffservMib::Diffservtbparam


class DiffservMib::Diffservaction : public Entity
{
    public:
        Diffservaction();
        ~Diffservaction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservactionnextfree; //type: uint32
        YLeaf diffservcountactnextfree; //type: uint32

}; // DiffservMib::Diffservaction


class DiffservMib::Diffservalgdrop : public Entity
{
    public:
        Diffservalgdrop();
        ~Diffservalgdrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservalgdropnextfree; //type: uint32
        YLeaf diffservrandomdropnextfree; //type: uint32

}; // DiffservMib::Diffservalgdrop


class DiffservMib::Diffservqueue : public Entity
{
    public:
        Diffservqueue();
        ~Diffservqueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservqnextfree; //type: uint32

}; // DiffservMib::Diffservqueue


class DiffservMib::Diffservscheduler : public Entity
{
    public:
        Diffservscheduler();
        ~Diffservscheduler();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservschedulernextfree; //type: uint32
        YLeaf diffservminratenextfree; //type: uint32
        YLeaf diffservmaxratenextfree; //type: uint32

}; // DiffservMib::Diffservscheduler


class DiffservMib::Diffservdatapathtable : public Entity
{
    public:
        Diffservdatapathtable();
        ~Diffservdatapathtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservdatapathentry; //type: DiffservMib::Diffservdatapathtable::Diffservdatapathentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservdatapathtable::Diffservdatapathentry> > diffservdatapathentry;
        
}; // DiffservMib::Diffservdatapathtable


class DiffservMib::Diffservdatapathtable::Diffservdatapathentry : public Entity
{
    public:
        Diffservdatapathentry();
        ~Diffservdatapathentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf diffservdatapathifdirection; //type: IfdirectionEnum
        YLeaf diffservdatapathstart; //type: string
        YLeaf diffservdatapathstorage; //type: StoragetypeEnum
        YLeaf diffservdatapathstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservdatapathtable::Diffservdatapathentry


class DiffservMib::Diffservclfrtable : public Entity
{
    public:
        Diffservclfrtable();
        ~Diffservclfrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservclfrentry; //type: DiffservMib::Diffservclfrtable::Diffservclfrentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclfrtable::Diffservclfrentry> > diffservclfrentry;
        
}; // DiffservMib::Diffservclfrtable


class DiffservMib::Diffservclfrtable::Diffservclfrentry : public Entity
{
    public:
        Diffservclfrentry();
        ~Diffservclfrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservclfrid; //type: uint32
        YLeaf diffservclfrstorage; //type: StoragetypeEnum
        YLeaf diffservclfrstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservclfrtable::Diffservclfrentry


class DiffservMib::Diffservclfrelementtable : public Entity
{
    public:
        Diffservclfrelementtable();
        ~Diffservclfrelementtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservclfrelemententry; //type: DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry> > diffservclfrelemententry;
        
}; // DiffservMib::Diffservclfrelementtable


class DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry : public Entity
{
    public:
        Diffservclfrelemententry();
        ~Diffservclfrelemententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to DIFFSERV_MIB::DiffservMib::Diffservclfrtable::Diffservclfrentry::diffservclfrid)
        YLeaf diffservclfrid;
        YLeaf diffservclfrelementid; //type: uint32
        YLeaf diffservclfrelementprecedence; //type: uint32
        YLeaf diffservclfrelementnext; //type: string
        YLeaf diffservclfrelementspecific; //type: string
        YLeaf diffservclfrelementstorage; //type: StoragetypeEnum
        YLeaf diffservclfrelementstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry


class DiffservMib::Diffservmultifieldclfrtable : public Entity
{
    public:
        Diffservmultifieldclfrtable();
        ~Diffservmultifieldclfrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservmultifieldclfrentry; //type: DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry> > diffservmultifieldclfrentry;
        
}; // DiffservMib::Diffservmultifieldclfrtable


class DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry : public Entity
{
    public:
        Diffservmultifieldclfrentry();
        ~Diffservmultifieldclfrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservmultifieldclfrid; //type: uint32
        YLeaf diffservmultifieldclfraddrtype; //type: InetaddresstypeEnum
        YLeaf diffservmultifieldclfrdstaddr; //type: binary
        YLeaf diffservmultifieldclfrdstprefixlength; //type: uint32
        YLeaf diffservmultifieldclfrsrcaddr; //type: binary
        YLeaf diffservmultifieldclfrsrcprefixlength; //type: uint32
        YLeaf diffservmultifieldclfrdscp; //type: int32
        YLeaf diffservmultifieldclfrflowid; //type: uint32
        YLeaf diffservmultifieldclfrprotocol; //type: uint32
        YLeaf diffservmultifieldclfrdstl4portmin; //type: uint16
        YLeaf diffservmultifieldclfrdstl4portmax; //type: uint16
        YLeaf diffservmultifieldclfrsrcl4portmin; //type: uint16
        YLeaf diffservmultifieldclfrsrcl4portmax; //type: uint16
        YLeaf diffservmultifieldclfrstorage; //type: StoragetypeEnum
        YLeaf diffservmultifieldclfrstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry


class DiffservMib::Diffservmetertable : public Entity
{
    public:
        Diffservmetertable();
        ~Diffservmetertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservmeterentry; //type: DiffservMib::Diffservmetertable::Diffservmeterentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmetertable::Diffservmeterentry> > diffservmeterentry;
        
}; // DiffservMib::Diffservmetertable


class DiffservMib::Diffservmetertable::Diffservmeterentry : public Entity
{
    public:
        Diffservmeterentry();
        ~Diffservmeterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservmeterid; //type: uint32
        YLeaf diffservmetersucceednext; //type: string
        YLeaf diffservmeterfailnext; //type: string
        YLeaf diffservmeterspecific; //type: string
        YLeaf diffservmeterstorage; //type: StoragetypeEnum
        YLeaf diffservmeterstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservmetertable::Diffservmeterentry


class DiffservMib::Diffservtbparamtable : public Entity
{
    public:
        Diffservtbparamtable();
        ~Diffservtbparamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservtbparamentry; //type: DiffservMib::Diffservtbparamtable::Diffservtbparamentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservtbparamtable::Diffservtbparamentry> > diffservtbparamentry;
        
}; // DiffservMib::Diffservtbparamtable


class DiffservMib::Diffservtbparamtable::Diffservtbparamentry : public Entity
{
    public:
        Diffservtbparamentry();
        ~Diffservtbparamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservtbparamid; //type: uint32
        YLeaf diffservtbparamtype; //type: string
        YLeaf diffservtbparamrate; //type: uint32
        YLeaf diffservtbparamburstsize; //type: int32
        YLeaf diffservtbparaminterval; //type: uint32
        YLeaf diffservtbparamstorage; //type: StoragetypeEnum
        YLeaf diffservtbparamstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservtbparamtable::Diffservtbparamentry


class DiffservMib::Diffservactiontable : public Entity
{
    public:
        Diffservactiontable();
        ~Diffservactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservactionentry; //type: DiffservMib::Diffservactiontable::Diffservactionentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservactiontable::Diffservactionentry> > diffservactionentry;
        
}; // DiffservMib::Diffservactiontable


class DiffservMib::Diffservactiontable::Diffservactionentry : public Entity
{
    public:
        Diffservactionentry();
        ~Diffservactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservactionid; //type: uint32
        YLeaf diffservactioninterface; //type: int32
        YLeaf diffservactionnext; //type: string
        YLeaf diffservactionspecific; //type: string
        YLeaf diffservactionstorage; //type: StoragetypeEnum
        YLeaf diffservactionstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservactiontable::Diffservactionentry


class DiffservMib::Diffservdscpmarkacttable : public Entity
{
    public:
        Diffservdscpmarkacttable();
        ~Diffservdscpmarkacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservdscpmarkactentry; //type: DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry> > diffservdscpmarkactentry;
        
}; // DiffservMib::Diffservdscpmarkacttable


class DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry : public Entity
{
    public:
        Diffservdscpmarkactentry();
        ~Diffservdscpmarkactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservdscpmarkactdscp; //type: uint8

}; // DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry


class DiffservMib::Diffservcountacttable : public Entity
{
    public:
        Diffservcountacttable();
        ~Diffservcountacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservcountactentry; //type: DiffservMib::Diffservcountacttable::Diffservcountactentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservcountacttable::Diffservcountactentry> > diffservcountactentry;
        
}; // DiffservMib::Diffservcountacttable


class DiffservMib::Diffservcountacttable::Diffservcountactentry : public Entity
{
    public:
        Diffservcountactentry();
        ~Diffservcountactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservcountactid; //type: uint32
        YLeaf diffservcountactoctets; //type: uint64
        YLeaf diffservcountactpkts; //type: uint64
        YLeaf diffservcountactstorage; //type: StoragetypeEnum
        YLeaf diffservcountactstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservcountacttable::Diffservcountactentry


class DiffservMib::Diffservalgdroptable : public Entity
{
    public:
        Diffservalgdroptable();
        ~Diffservalgdroptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservalgdropentry; //type: DiffservMib::Diffservalgdroptable::Diffservalgdropentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservalgdroptable::Diffservalgdropentry> > diffservalgdropentry;
        
}; // DiffservMib::Diffservalgdroptable


class DiffservMib::Diffservalgdroptable::Diffservalgdropentry : public Entity
{
    public:
        Diffservalgdropentry();
        ~Diffservalgdropentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservalgdropid; //type: uint32
        YLeaf diffservalgdroptype; //type: DiffservalgdroptypeEnum
        YLeaf diffservalgdropnext; //type: string
        YLeaf diffservalgdropqmeasure; //type: string
        YLeaf diffservalgdropqthreshold; //type: uint32
        YLeaf diffservalgdropspecific; //type: string
        YLeaf diffservalgdropoctets; //type: uint64
        YLeaf diffservalgdroppkts; //type: uint64
        YLeaf diffservalgrandomdropoctets; //type: uint64
        YLeaf diffservalgrandomdroppkts; //type: uint64
        YLeaf diffservalgdropstorage; //type: StoragetypeEnum
        YLeaf diffservalgdropstatus; //type: RowstatusEnum
        class DiffservalgdroptypeEnum;

}; // DiffservMib::Diffservalgdroptable::Diffservalgdropentry


class DiffservMib::Diffservrandomdroptable : public Entity
{
    public:
        Diffservrandomdroptable();
        ~Diffservrandomdroptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservrandomdropentry; //type: DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry> > diffservrandomdropentry;
        
}; // DiffservMib::Diffservrandomdroptable


class DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry : public Entity
{
    public:
        Diffservrandomdropentry();
        ~Diffservrandomdropentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservrandomdropid; //type: uint32
        YLeaf diffservrandomdropminthreshbytes; //type: uint32
        YLeaf diffservrandomdropminthreshpkts; //type: uint32
        YLeaf diffservrandomdropmaxthreshbytes; //type: uint32
        YLeaf diffservrandomdropmaxthreshpkts; //type: uint32
        YLeaf diffservrandomdropprobmax; //type: uint32
        YLeaf diffservrandomdropweight; //type: uint32
        YLeaf diffservrandomdropsamplingrate; //type: uint32
        YLeaf diffservrandomdropstorage; //type: StoragetypeEnum
        YLeaf diffservrandomdropstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry


class DiffservMib::Diffservqtable : public Entity
{
    public:
        Diffservqtable();
        ~Diffservqtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservqentry; //type: DiffservMib::Diffservqtable::Diffservqentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservqtable::Diffservqentry> > diffservqentry;
        
}; // DiffservMib::Diffservqtable


class DiffservMib::Diffservqtable::Diffservqentry : public Entity
{
    public:
        Diffservqentry();
        ~Diffservqentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservqid; //type: uint32
        YLeaf diffservqnext; //type: string
        YLeaf diffservqminrate; //type: string
        YLeaf diffservqmaxrate; //type: string
        YLeaf diffservqstorage; //type: StoragetypeEnum
        YLeaf diffservqstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservqtable::Diffservqentry


class DiffservMib::Diffservschedulertable : public Entity
{
    public:
        Diffservschedulertable();
        ~Diffservschedulertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservschedulerentry; //type: DiffservMib::Diffservschedulertable::Diffservschedulerentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservschedulertable::Diffservschedulerentry> > diffservschedulerentry;
        
}; // DiffservMib::Diffservschedulertable


class DiffservMib::Diffservschedulertable::Diffservschedulerentry : public Entity
{
    public:
        Diffservschedulerentry();
        ~Diffservschedulerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservschedulerid; //type: uint32
        YLeaf diffservschedulernext; //type: string
        YLeaf diffservschedulermethod; //type: string
        YLeaf diffservschedulerminrate; //type: string
        YLeaf diffservschedulermaxrate; //type: string
        YLeaf diffservschedulerstorage; //type: StoragetypeEnum
        YLeaf diffservschedulerstatus; //type: RowstatusEnum

}; // DiffservMib::Diffservschedulertable::Diffservschedulerentry


class DiffservMib::Diffservminratetable : public Entity
{
    public:
        Diffservminratetable();
        ~Diffservminratetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservminrateentry; //type: DiffservMib::Diffservminratetable::Diffservminrateentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservminratetable::Diffservminrateentry> > diffservminrateentry;
        
}; // DiffservMib::Diffservminratetable


class DiffservMib::Diffservminratetable::Diffservminrateentry : public Entity
{
    public:
        Diffservminrateentry();
        ~Diffservminrateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservminrateid; //type: uint32
        YLeaf diffservminratepriority; //type: uint32
        YLeaf diffservminrateabsolute; //type: uint32
        YLeaf diffservminraterelative; //type: uint32
        YLeaf diffservminratestorage; //type: StoragetypeEnum
        YLeaf diffservminratestatus; //type: RowstatusEnum

}; // DiffservMib::Diffservminratetable::Diffservminrateentry


class DiffservMib::Diffservmaxratetable : public Entity
{
    public:
        Diffservmaxratetable();
        ~Diffservmaxratetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diffservmaxrateentry; //type: DiffservMib::Diffservmaxratetable::Diffservmaxrateentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmaxratetable::Diffservmaxrateentry> > diffservmaxrateentry;
        
}; // DiffservMib::Diffservmaxratetable


class DiffservMib::Diffservmaxratetable::Diffservmaxrateentry : public Entity
{
    public:
        Diffservmaxrateentry();
        ~Diffservmaxrateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diffservmaxrateid; //type: uint32
        YLeaf diffservmaxratelevel; //type: uint32
        YLeaf diffservmaxrateabsolute; //type: uint32
        YLeaf diffservmaxraterelative; //type: uint32
        YLeaf diffservmaxratethreshold; //type: int32
        YLeaf diffservmaxratestorage; //type: StoragetypeEnum
        YLeaf diffservmaxratestatus; //type: RowstatusEnum

}; // DiffservMib::Diffservmaxratetable::Diffservmaxrateentry

class IfdirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf inbound;
        static const Enum::YLeaf outbound;

};

class DiffservMib::Diffservalgdroptable::Diffservalgdropentry::DiffservalgdroptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf tailDrop;
        static const Enum::YLeaf headDrop;
        static const Enum::YLeaf randomDrop;
        static const Enum::YLeaf alwaysDrop;

};


}
}

#endif /* _DIFFSERV_MIB_ */

