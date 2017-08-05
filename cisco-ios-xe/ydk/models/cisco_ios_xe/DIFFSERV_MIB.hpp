#ifndef _DIFFSERV_MIB_
#define _DIFFSERV_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace DIFFSERV_MIB {

class Diffservtbparamsrtcmaware : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamsrtcmaware();
        ~Diffservtbparamsrtcmaware();


}; // Diffservtbparamsrtcmaware

class Diffservtbparamtrtcmaware : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamtrtcmaware();
        ~Diffservtbparamtrtcmaware();


}; // Diffservtbparamtrtcmaware

class Diffservtbparamtrtcmblind : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamtrtcmblind();
        ~Diffservtbparamtrtcmblind();


}; // Diffservtbparamtrtcmblind

class Diffservschedulerwfq : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservschedulerwfq();
        ~Diffservschedulerwfq();


}; // Diffservschedulerwfq

class Diffservtbparamtswtcm : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamtswtcm();
        ~Diffservtbparamtswtcm();


}; // Diffservtbparamtswtcm

class Diffservtbparamavgrate : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamavgrate();
        ~Diffservtbparamavgrate();


}; // Diffservtbparamavgrate

class Diffservschedulerwrr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservschedulerwrr();
        ~Diffservschedulerwrr();


}; // Diffservschedulerwrr

class Diffservtbparamsimpletokenbucket : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamsimpletokenbucket();
        ~Diffservtbparamsimpletokenbucket();


}; // Diffservtbparamsimpletokenbucket

class Diffservschedulerpriority : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservschedulerpriority();
        ~Diffservschedulerpriority();


}; // Diffservschedulerpriority

class Diffservtbparamsrtcmblind : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamsrtcmblind();
        ~Diffservtbparamsrtcmblind();


}; // Diffservtbparamsrtcmblind

class DiffservMib : public ydk::Entity
{
    public:
        DiffservMib();
        ~DiffservMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

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


class DiffservMib::Diffservclassifier : public ydk::Entity
{
    public:
        Diffservclassifier();
        ~Diffservclassifier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservclfrnextfree; //type: uint32
        ydk::YLeaf diffservclfrelementnextfree; //type: uint32
        ydk::YLeaf diffservmultifieldclfrnextfree; //type: uint32

}; // DiffservMib::Diffservclassifier


class DiffservMib::Diffservmeter : public ydk::Entity
{
    public:
        Diffservmeter();
        ~Diffservmeter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservmeternextfree; //type: uint32

}; // DiffservMib::Diffservmeter


class DiffservMib::Diffservtbparam : public ydk::Entity
{
    public:
        Diffservtbparam();
        ~Diffservtbparam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservtbparamnextfree; //type: uint32

}; // DiffservMib::Diffservtbparam


class DiffservMib::Diffservaction : public ydk::Entity
{
    public:
        Diffservaction();
        ~Diffservaction();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservactionnextfree; //type: uint32
        ydk::YLeaf diffservcountactnextfree; //type: uint32

}; // DiffservMib::Diffservaction


class DiffservMib::Diffservalgdrop : public ydk::Entity
{
    public:
        Diffservalgdrop();
        ~Diffservalgdrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservalgdropnextfree; //type: uint32
        ydk::YLeaf diffservrandomdropnextfree; //type: uint32

}; // DiffservMib::Diffservalgdrop


class DiffservMib::Diffservqueue : public ydk::Entity
{
    public:
        Diffservqueue();
        ~Diffservqueue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservqnextfree; //type: uint32

}; // DiffservMib::Diffservqueue


class DiffservMib::Diffservscheduler : public ydk::Entity
{
    public:
        Diffservscheduler();
        ~Diffservscheduler();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservschedulernextfree; //type: uint32
        ydk::YLeaf diffservminratenextfree; //type: uint32
        ydk::YLeaf diffservmaxratenextfree; //type: uint32

}; // DiffservMib::Diffservscheduler


class DiffservMib::Diffservdatapathtable : public ydk::Entity
{
    public:
        Diffservdatapathtable();
        ~Diffservdatapathtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservdatapathentry; //type: DiffservMib::Diffservdatapathtable::Diffservdatapathentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservdatapathtable::Diffservdatapathentry> > diffservdatapathentry;
        
}; // DiffservMib::Diffservdatapathtable


class DiffservMib::Diffservdatapathtable::Diffservdatapathentry : public ydk::Entity
{
    public:
        Diffservdatapathentry();
        ~Diffservdatapathentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf diffservdatapathifdirection; //type: Ifdirection
        ydk::YLeaf diffservdatapathstart; //type: string
        ydk::YLeaf diffservdatapathstorage; //type: Storagetype
        ydk::YLeaf diffservdatapathstatus; //type: Rowstatus

}; // DiffservMib::Diffservdatapathtable::Diffservdatapathentry


class DiffservMib::Diffservclfrtable : public ydk::Entity
{
    public:
        Diffservclfrtable();
        ~Diffservclfrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservclfrentry; //type: DiffservMib::Diffservclfrtable::Diffservclfrentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclfrtable::Diffservclfrentry> > diffservclfrentry;
        
}; // DiffservMib::Diffservclfrtable


class DiffservMib::Diffservclfrtable::Diffservclfrentry : public ydk::Entity
{
    public:
        Diffservclfrentry();
        ~Diffservclfrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservclfrid; //type: uint32
        ydk::YLeaf diffservclfrstorage; //type: Storagetype
        ydk::YLeaf diffservclfrstatus; //type: Rowstatus

}; // DiffservMib::Diffservclfrtable::Diffservclfrentry


class DiffservMib::Diffservclfrelementtable : public ydk::Entity
{
    public:
        Diffservclfrelementtable();
        ~Diffservclfrelementtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservclfrelemententry; //type: DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry> > diffservclfrelemententry;
        
}; // DiffservMib::Diffservclfrelementtable


class DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry : public ydk::Entity
{
    public:
        Diffservclfrelemententry();
        ~Diffservclfrelemententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to DIFFSERV_MIB::DiffservMib::Diffservclfrtable::Diffservclfrentry::diffservclfrid)
        ydk::YLeaf diffservclfrid;
        ydk::YLeaf diffservclfrelementid; //type: uint32
        ydk::YLeaf diffservclfrelementprecedence; //type: uint32
        ydk::YLeaf diffservclfrelementnext; //type: string
        ydk::YLeaf diffservclfrelementspecific; //type: string
        ydk::YLeaf diffservclfrelementstorage; //type: Storagetype
        ydk::YLeaf diffservclfrelementstatus; //type: Rowstatus

}; // DiffservMib::Diffservclfrelementtable::Diffservclfrelemententry


class DiffservMib::Diffservmultifieldclfrtable : public ydk::Entity
{
    public:
        Diffservmultifieldclfrtable();
        ~Diffservmultifieldclfrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservmultifieldclfrentry; //type: DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry> > diffservmultifieldclfrentry;
        
}; // DiffservMib::Diffservmultifieldclfrtable


class DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry : public ydk::Entity
{
    public:
        Diffservmultifieldclfrentry();
        ~Diffservmultifieldclfrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservmultifieldclfrid; //type: uint32
        ydk::YLeaf diffservmultifieldclfraddrtype; //type: Inetaddresstype
        ydk::YLeaf diffservmultifieldclfrdstaddr; //type: binary
        ydk::YLeaf diffservmultifieldclfrdstprefixlength; //type: uint32
        ydk::YLeaf diffservmultifieldclfrsrcaddr; //type: binary
        ydk::YLeaf diffservmultifieldclfrsrcprefixlength; //type: uint32
        ydk::YLeaf diffservmultifieldclfrdscp; //type: int32
        ydk::YLeaf diffservmultifieldclfrflowid; //type: uint32
        ydk::YLeaf diffservmultifieldclfrprotocol; //type: uint32
        ydk::YLeaf diffservmultifieldclfrdstl4portmin; //type: uint16
        ydk::YLeaf diffservmultifieldclfrdstl4portmax; //type: uint16
        ydk::YLeaf diffservmultifieldclfrsrcl4portmin; //type: uint16
        ydk::YLeaf diffservmultifieldclfrsrcl4portmax; //type: uint16
        ydk::YLeaf diffservmultifieldclfrstorage; //type: Storagetype
        ydk::YLeaf diffservmultifieldclfrstatus; //type: Rowstatus

}; // DiffservMib::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry


class DiffservMib::Diffservmetertable : public ydk::Entity
{
    public:
        Diffservmetertable();
        ~Diffservmetertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservmeterentry; //type: DiffservMib::Diffservmetertable::Diffservmeterentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmetertable::Diffservmeterentry> > diffservmeterentry;
        
}; // DiffservMib::Diffservmetertable


class DiffservMib::Diffservmetertable::Diffservmeterentry : public ydk::Entity
{
    public:
        Diffservmeterentry();
        ~Diffservmeterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservmeterid; //type: uint32
        ydk::YLeaf diffservmetersucceednext; //type: string
        ydk::YLeaf diffservmeterfailnext; //type: string
        ydk::YLeaf diffservmeterspecific; //type: string
        ydk::YLeaf diffservmeterstorage; //type: Storagetype
        ydk::YLeaf diffservmeterstatus; //type: Rowstatus

}; // DiffservMib::Diffservmetertable::Diffservmeterentry


class DiffservMib::Diffservtbparamtable : public ydk::Entity
{
    public:
        Diffservtbparamtable();
        ~Diffservtbparamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservtbparamentry; //type: DiffservMib::Diffservtbparamtable::Diffservtbparamentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservtbparamtable::Diffservtbparamentry> > diffservtbparamentry;
        
}; // DiffservMib::Diffservtbparamtable


class DiffservMib::Diffservtbparamtable::Diffservtbparamentry : public ydk::Entity
{
    public:
        Diffservtbparamentry();
        ~Diffservtbparamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservtbparamid; //type: uint32
        ydk::YLeaf diffservtbparamtype; //type: string
        ydk::YLeaf diffservtbparamrate; //type: uint32
        ydk::YLeaf diffservtbparamburstsize; //type: int32
        ydk::YLeaf diffservtbparaminterval; //type: uint32
        ydk::YLeaf diffservtbparamstorage; //type: Storagetype
        ydk::YLeaf diffservtbparamstatus; //type: Rowstatus

}; // DiffservMib::Diffservtbparamtable::Diffservtbparamentry


class DiffservMib::Diffservactiontable : public ydk::Entity
{
    public:
        Diffservactiontable();
        ~Diffservactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservactionentry; //type: DiffservMib::Diffservactiontable::Diffservactionentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservactiontable::Diffservactionentry> > diffservactionentry;
        
}; // DiffservMib::Diffservactiontable


class DiffservMib::Diffservactiontable::Diffservactionentry : public ydk::Entity
{
    public:
        Diffservactionentry();
        ~Diffservactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservactionid; //type: uint32
        ydk::YLeaf diffservactioninterface; //type: int32
        ydk::YLeaf diffservactionnext; //type: string
        ydk::YLeaf diffservactionspecific; //type: string
        ydk::YLeaf diffservactionstorage; //type: Storagetype
        ydk::YLeaf diffservactionstatus; //type: Rowstatus

}; // DiffservMib::Diffservactiontable::Diffservactionentry


class DiffservMib::Diffservdscpmarkacttable : public ydk::Entity
{
    public:
        Diffservdscpmarkacttable();
        ~Diffservdscpmarkacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservdscpmarkactentry; //type: DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry> > diffservdscpmarkactentry;
        
}; // DiffservMib::Diffservdscpmarkacttable


class DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry : public ydk::Entity
{
    public:
        Diffservdscpmarkactentry();
        ~Diffservdscpmarkactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservdscpmarkactdscp; //type: uint8

}; // DiffservMib::Diffservdscpmarkacttable::Diffservdscpmarkactentry


class DiffservMib::Diffservcountacttable : public ydk::Entity
{
    public:
        Diffservcountacttable();
        ~Diffservcountacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservcountactentry; //type: DiffservMib::Diffservcountacttable::Diffservcountactentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservcountacttable::Diffservcountactentry> > diffservcountactentry;
        
}; // DiffservMib::Diffservcountacttable


class DiffservMib::Diffservcountacttable::Diffservcountactentry : public ydk::Entity
{
    public:
        Diffservcountactentry();
        ~Diffservcountactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservcountactid; //type: uint32
        ydk::YLeaf diffservcountactoctets; //type: uint64
        ydk::YLeaf diffservcountactpkts; //type: uint64
        ydk::YLeaf diffservcountactstorage; //type: Storagetype
        ydk::YLeaf diffservcountactstatus; //type: Rowstatus

}; // DiffservMib::Diffservcountacttable::Diffservcountactentry


class DiffservMib::Diffservalgdroptable : public ydk::Entity
{
    public:
        Diffservalgdroptable();
        ~Diffservalgdroptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservalgdropentry; //type: DiffservMib::Diffservalgdroptable::Diffservalgdropentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservalgdroptable::Diffservalgdropentry> > diffservalgdropentry;
        
}; // DiffservMib::Diffservalgdroptable


class DiffservMib::Diffservalgdroptable::Diffservalgdropentry : public ydk::Entity
{
    public:
        Diffservalgdropentry();
        ~Diffservalgdropentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservalgdropid; //type: uint32
        ydk::YLeaf diffservalgdroptype; //type: Diffservalgdroptype
        ydk::YLeaf diffservalgdropnext; //type: string
        ydk::YLeaf diffservalgdropqmeasure; //type: string
        ydk::YLeaf diffservalgdropqthreshold; //type: uint32
        ydk::YLeaf diffservalgdropspecific; //type: string
        ydk::YLeaf diffservalgdropoctets; //type: uint64
        ydk::YLeaf diffservalgdroppkts; //type: uint64
        ydk::YLeaf diffservalgrandomdropoctets; //type: uint64
        ydk::YLeaf diffservalgrandomdroppkts; //type: uint64
        ydk::YLeaf diffservalgdropstorage; //type: Storagetype
        ydk::YLeaf diffservalgdropstatus; //type: Rowstatus
        class Diffservalgdroptype;

}; // DiffservMib::Diffservalgdroptable::Diffservalgdropentry


class DiffservMib::Diffservrandomdroptable : public ydk::Entity
{
    public:
        Diffservrandomdroptable();
        ~Diffservrandomdroptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservrandomdropentry; //type: DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry> > diffservrandomdropentry;
        
}; // DiffservMib::Diffservrandomdroptable


class DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry : public ydk::Entity
{
    public:
        Diffservrandomdropentry();
        ~Diffservrandomdropentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservrandomdropid; //type: uint32
        ydk::YLeaf diffservrandomdropminthreshbytes; //type: uint32
        ydk::YLeaf diffservrandomdropminthreshpkts; //type: uint32
        ydk::YLeaf diffservrandomdropmaxthreshbytes; //type: uint32
        ydk::YLeaf diffservrandomdropmaxthreshpkts; //type: uint32
        ydk::YLeaf diffservrandomdropprobmax; //type: uint32
        ydk::YLeaf diffservrandomdropweight; //type: uint32
        ydk::YLeaf diffservrandomdropsamplingrate; //type: uint32
        ydk::YLeaf diffservrandomdropstorage; //type: Storagetype
        ydk::YLeaf diffservrandomdropstatus; //type: Rowstatus

}; // DiffservMib::Diffservrandomdroptable::Diffservrandomdropentry


class DiffservMib::Diffservqtable : public ydk::Entity
{
    public:
        Diffservqtable();
        ~Diffservqtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservqentry; //type: DiffservMib::Diffservqtable::Diffservqentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservqtable::Diffservqentry> > diffservqentry;
        
}; // DiffservMib::Diffservqtable


class DiffservMib::Diffservqtable::Diffservqentry : public ydk::Entity
{
    public:
        Diffservqentry();
        ~Diffservqentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservqid; //type: uint32
        ydk::YLeaf diffservqnext; //type: string
        ydk::YLeaf diffservqminrate; //type: string
        ydk::YLeaf diffservqmaxrate; //type: string
        ydk::YLeaf diffservqstorage; //type: Storagetype
        ydk::YLeaf diffservqstatus; //type: Rowstatus

}; // DiffservMib::Diffservqtable::Diffservqentry


class DiffservMib::Diffservschedulertable : public ydk::Entity
{
    public:
        Diffservschedulertable();
        ~Diffservschedulertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservschedulerentry; //type: DiffservMib::Diffservschedulertable::Diffservschedulerentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservschedulertable::Diffservschedulerentry> > diffservschedulerentry;
        
}; // DiffservMib::Diffservschedulertable


class DiffservMib::Diffservschedulertable::Diffservschedulerentry : public ydk::Entity
{
    public:
        Diffservschedulerentry();
        ~Diffservschedulerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservschedulerid; //type: uint32
        ydk::YLeaf diffservschedulernext; //type: string
        ydk::YLeaf diffservschedulermethod; //type: string
        ydk::YLeaf diffservschedulerminrate; //type: string
        ydk::YLeaf diffservschedulermaxrate; //type: string
        ydk::YLeaf diffservschedulerstorage; //type: Storagetype
        ydk::YLeaf diffservschedulerstatus; //type: Rowstatus

}; // DiffservMib::Diffservschedulertable::Diffservschedulerentry


class DiffservMib::Diffservminratetable : public ydk::Entity
{
    public:
        Diffservminratetable();
        ~Diffservminratetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservminrateentry; //type: DiffservMib::Diffservminratetable::Diffservminrateentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservminratetable::Diffservminrateentry> > diffservminrateentry;
        
}; // DiffservMib::Diffservminratetable


class DiffservMib::Diffservminratetable::Diffservminrateentry : public ydk::Entity
{
    public:
        Diffservminrateentry();
        ~Diffservminrateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservminrateid; //type: uint32
        ydk::YLeaf diffservminratepriority; //type: uint32
        ydk::YLeaf diffservminrateabsolute; //type: uint32
        ydk::YLeaf diffservminraterelative; //type: uint32
        ydk::YLeaf diffservminratestorage; //type: Storagetype
        ydk::YLeaf diffservminratestatus; //type: Rowstatus

}; // DiffservMib::Diffservminratetable::Diffservminrateentry


class DiffservMib::Diffservmaxratetable : public ydk::Entity
{
    public:
        Diffservmaxratetable();
        ~Diffservmaxratetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diffservmaxrateentry; //type: DiffservMib::Diffservmaxratetable::Diffservmaxrateentry

        std::vector<std::shared_ptr<DIFFSERV_MIB::DiffservMib::Diffservmaxratetable::Diffservmaxrateentry> > diffservmaxrateentry;
        
}; // DiffservMib::Diffservmaxratetable


class DiffservMib::Diffservmaxratetable::Diffservmaxrateentry : public ydk::Entity
{
    public:
        Diffservmaxrateentry();
        ~Diffservmaxrateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diffservmaxrateid; //type: uint32
        ydk::YLeaf diffservmaxratelevel; //type: uint32
        ydk::YLeaf diffservmaxrateabsolute; //type: uint32
        ydk::YLeaf diffservmaxraterelative; //type: uint32
        ydk::YLeaf diffservmaxratethreshold; //type: int32
        ydk::YLeaf diffservmaxratestorage; //type: Storagetype
        ydk::YLeaf diffservmaxratestatus; //type: Rowstatus

}; // DiffservMib::Diffservmaxratetable::Diffservmaxrateentry

class Ifdirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};

class DiffservMib::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf tailDrop;
        static const ydk::Enum::YLeaf headDrop;
        static const ydk::Enum::YLeaf randomDrop;
        static const ydk::Enum::YLeaf alwaysDrop;

};


}
}

#endif /* _DIFFSERV_MIB_ */

