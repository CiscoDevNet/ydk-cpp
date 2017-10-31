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

class Diffservtbparamsimpletokenbucket : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamsimpletokenbucket();
        ~Diffservtbparamsimpletokenbucket();


}; // Diffservtbparamsimpletokenbucket

class Diffservtbparamavgrate : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamavgrate();
        ~Diffservtbparamavgrate();


}; // Diffservtbparamavgrate

class Diffservtbparamsrtcmblind : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamsrtcmblind();
        ~Diffservtbparamsrtcmblind();


}; // Diffservtbparamsrtcmblind

class Diffservtbparamsrtcmaware : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamsrtcmaware();
        ~Diffservtbparamsrtcmaware();


}; // Diffservtbparamsrtcmaware

class Diffservtbparamtrtcmblind : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamtrtcmblind();
        ~Diffservtbparamtrtcmblind();


}; // Diffservtbparamtrtcmblind

class Diffservtbparamtrtcmaware : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamtrtcmaware();
        ~Diffservtbparamtrtcmaware();


}; // Diffservtbparamtrtcmaware

class Diffservtbparamtswtcm : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservtbparamtswtcm();
        ~Diffservtbparamtswtcm();


}; // Diffservtbparamtswtcm

class Diffservschedulerpriority : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservschedulerpriority();
        ~Diffservschedulerpriority();


}; // Diffservschedulerpriority

class Diffservschedulerwrr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservschedulerwrr();
        ~Diffservschedulerwrr();


}; // Diffservschedulerwrr

class Diffservschedulerwfq : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Diffservschedulerwfq();
        ~Diffservschedulerwfq();


}; // Diffservschedulerwfq

class DIFFSERVMIB : public ydk::Entity
{
    public:
        DIFFSERVMIB();
        ~DIFFSERVMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Diffservclassifier; //type: DIFFSERVMIB::Diffservclassifier
        class Diffservmeter; //type: DIFFSERVMIB::Diffservmeter
        class Diffservtbparam; //type: DIFFSERVMIB::Diffservtbparam
        class Diffservaction; //type: DIFFSERVMIB::Diffservaction
        class Diffservalgdrop; //type: DIFFSERVMIB::Diffservalgdrop
        class Diffservqueue; //type: DIFFSERVMIB::Diffservqueue
        class Diffservscheduler; //type: DIFFSERVMIB::Diffservscheduler
        class Diffservdatapathtable; //type: DIFFSERVMIB::Diffservdatapathtable
        class Diffservclfrtable; //type: DIFFSERVMIB::Diffservclfrtable
        class Diffservclfrelementtable; //type: DIFFSERVMIB::Diffservclfrelementtable
        class Diffservmultifieldclfrtable; //type: DIFFSERVMIB::Diffservmultifieldclfrtable
        class Diffservmetertable; //type: DIFFSERVMIB::Diffservmetertable
        class Diffservtbparamtable; //type: DIFFSERVMIB::Diffservtbparamtable
        class Diffservactiontable; //type: DIFFSERVMIB::Diffservactiontable
        class Diffservdscpmarkacttable; //type: DIFFSERVMIB::Diffservdscpmarkacttable
        class Diffservcountacttable; //type: DIFFSERVMIB::Diffservcountacttable
        class Diffservalgdroptable; //type: DIFFSERVMIB::Diffservalgdroptable
        class Diffservrandomdroptable; //type: DIFFSERVMIB::Diffservrandomdroptable
        class Diffservqtable; //type: DIFFSERVMIB::Diffservqtable
        class Diffservschedulertable; //type: DIFFSERVMIB::Diffservschedulertable
        class Diffservminratetable; //type: DIFFSERVMIB::Diffservminratetable
        class Diffservmaxratetable; //type: DIFFSERVMIB::Diffservmaxratetable

        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservclassifier> diffservclassifier;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmeter> diffservmeter;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservtbparam> diffservtbparam;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservaction> diffservaction;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservalgdrop> diffservalgdrop;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservqueue> diffservqueue;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservscheduler> diffservscheduler;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservdatapathtable> diffservdatapathtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservclfrtable> diffservclfrtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservclfrelementtable> diffservclfrelementtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmultifieldclfrtable> diffservmultifieldclfrtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmetertable> diffservmetertable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservtbparamtable> diffservtbparamtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservactiontable> diffservactiontable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservdscpmarkacttable> diffservdscpmarkacttable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservcountacttable> diffservcountacttable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservalgdroptable> diffservalgdroptable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservrandomdroptable> diffservrandomdroptable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservqtable> diffservqtable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservschedulertable> diffservschedulertable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservminratetable> diffservminratetable;
        std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmaxratetable> diffservmaxratetable;
        
}; // DIFFSERVMIB


class DIFFSERVMIB::Diffservclassifier : public ydk::Entity
{
    public:
        Diffservclassifier();
        ~Diffservclassifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservclfrnextfree; //type: uint32
        ydk::YLeaf diffservclfrelementnextfree; //type: uint32
        ydk::YLeaf diffservmultifieldclfrnextfree; //type: uint32

}; // DIFFSERVMIB::Diffservclassifier


class DIFFSERVMIB::Diffservmeter : public ydk::Entity
{
    public:
        Diffservmeter();
        ~Diffservmeter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmeternextfree; //type: uint32

}; // DIFFSERVMIB::Diffservmeter


class DIFFSERVMIB::Diffservtbparam : public ydk::Entity
{
    public:
        Diffservtbparam();
        ~Diffservtbparam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservtbparamnextfree; //type: uint32

}; // DIFFSERVMIB::Diffservtbparam


class DIFFSERVMIB::Diffservaction : public ydk::Entity
{
    public:
        Diffservaction();
        ~Diffservaction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservactionnextfree; //type: uint32
        ydk::YLeaf diffservcountactnextfree; //type: uint32

}; // DIFFSERVMIB::Diffservaction


class DIFFSERVMIB::Diffservalgdrop : public ydk::Entity
{
    public:
        Diffservalgdrop();
        ~Diffservalgdrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservalgdropnextfree; //type: uint32
        ydk::YLeaf diffservrandomdropnextfree; //type: uint32

}; // DIFFSERVMIB::Diffservalgdrop


class DIFFSERVMIB::Diffservqueue : public ydk::Entity
{
    public:
        Diffservqueue();
        ~Diffservqueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservqnextfree; //type: uint32

}; // DIFFSERVMIB::Diffservqueue


class DIFFSERVMIB::Diffservscheduler : public ydk::Entity
{
    public:
        Diffservscheduler();
        ~Diffservscheduler();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservschedulernextfree; //type: uint32
        ydk::YLeaf diffservminratenextfree; //type: uint32
        ydk::YLeaf diffservmaxratenextfree; //type: uint32

}; // DIFFSERVMIB::Diffservscheduler


class DIFFSERVMIB::Diffservdatapathtable : public ydk::Entity
{
    public:
        Diffservdatapathtable();
        ~Diffservdatapathtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservdatapathentry; //type: DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry> > diffservdatapathentry;
        
}; // DIFFSERVMIB::Diffservdatapathtable


class DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry : public ydk::Entity
{
    public:
        Diffservdatapathentry();
        ~Diffservdatapathentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf diffservdatapathifdirection; //type: IfDirection
        ydk::YLeaf diffservdatapathstart; //type: string
        ydk::YLeaf diffservdatapathstorage; //type: StorageType
        ydk::YLeaf diffservdatapathstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservdatapathtable::Diffservdatapathentry


class DIFFSERVMIB::Diffservclfrtable : public ydk::Entity
{
    public:
        Diffservclfrtable();
        ~Diffservclfrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservclfrentry; //type: DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry> > diffservclfrentry;
        
}; // DIFFSERVMIB::Diffservclfrtable


class DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry : public ydk::Entity
{
    public:
        Diffservclfrentry();
        ~Diffservclfrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservclfrid; //type: uint32
        ydk::YLeaf diffservclfrstorage; //type: StorageType
        ydk::YLeaf diffservclfrstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry


class DIFFSERVMIB::Diffservclfrelementtable : public ydk::Entity
{
    public:
        Diffservclfrelementtable();
        ~Diffservclfrelementtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservclfrelemententry; //type: DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry> > diffservclfrelemententry;
        
}; // DIFFSERVMIB::Diffservclfrelementtable


class DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry : public ydk::Entity
{
    public:
        Diffservclfrelemententry();
        ~Diffservclfrelemententry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservclfrtable::Diffservclfrentry::diffservclfrid)
        ydk::YLeaf diffservclfrid;
        ydk::YLeaf diffservclfrelementid; //type: uint32
        ydk::YLeaf diffservclfrelementprecedence; //type: uint32
        ydk::YLeaf diffservclfrelementnext; //type: string
        ydk::YLeaf diffservclfrelementspecific; //type: string
        ydk::YLeaf diffservclfrelementstorage; //type: StorageType
        ydk::YLeaf diffservclfrelementstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservclfrelementtable::Diffservclfrelemententry


class DIFFSERVMIB::Diffservmultifieldclfrtable : public ydk::Entity
{
    public:
        Diffservmultifieldclfrtable();
        ~Diffservmultifieldclfrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservmultifieldclfrentry; //type: DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry> > diffservmultifieldclfrentry;
        
}; // DIFFSERVMIB::Diffservmultifieldclfrtable


class DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry : public ydk::Entity
{
    public:
        Diffservmultifieldclfrentry();
        ~Diffservmultifieldclfrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmultifieldclfrid; //type: uint32
        ydk::YLeaf diffservmultifieldclfraddrtype; //type: InetAddressType
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
        ydk::YLeaf diffservmultifieldclfrstorage; //type: StorageType
        ydk::YLeaf diffservmultifieldclfrstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservmultifieldclfrtable::Diffservmultifieldclfrentry


class DIFFSERVMIB::Diffservmetertable : public ydk::Entity
{
    public:
        Diffservmetertable();
        ~Diffservmetertable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservmeterentry; //type: DIFFSERVMIB::Diffservmetertable::Diffservmeterentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmetertable::Diffservmeterentry> > diffservmeterentry;
        
}; // DIFFSERVMIB::Diffservmetertable


class DIFFSERVMIB::Diffservmetertable::Diffservmeterentry : public ydk::Entity
{
    public:
        Diffservmeterentry();
        ~Diffservmeterentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmeterid; //type: uint32
        ydk::YLeaf diffservmetersucceednext; //type: string
        ydk::YLeaf diffservmeterfailnext; //type: string
        ydk::YLeaf diffservmeterspecific; //type: string
        ydk::YLeaf diffservmeterstorage; //type: StorageType
        ydk::YLeaf diffservmeterstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservmetertable::Diffservmeterentry


class DIFFSERVMIB::Diffservtbparamtable : public ydk::Entity
{
    public:
        Diffservtbparamtable();
        ~Diffservtbparamtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservtbparamentry; //type: DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry> > diffservtbparamentry;
        
}; // DIFFSERVMIB::Diffservtbparamtable


class DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry : public ydk::Entity
{
    public:
        Diffservtbparamentry();
        ~Diffservtbparamentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservtbparamid; //type: uint32
        ydk::YLeaf diffservtbparamtype; //type: string
        ydk::YLeaf diffservtbparamrate; //type: uint32
        ydk::YLeaf diffservtbparamburstsize; //type: int32
        ydk::YLeaf diffservtbparaminterval; //type: uint32
        ydk::YLeaf diffservtbparamstorage; //type: StorageType
        ydk::YLeaf diffservtbparamstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservtbparamtable::Diffservtbparamentry


class DIFFSERVMIB::Diffservactiontable : public ydk::Entity
{
    public:
        Diffservactiontable();
        ~Diffservactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservactionentry; //type: DIFFSERVMIB::Diffservactiontable::Diffservactionentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservactiontable::Diffservactionentry> > diffservactionentry;
        
}; // DIFFSERVMIB::Diffservactiontable


class DIFFSERVMIB::Diffservactiontable::Diffservactionentry : public ydk::Entity
{
    public:
        Diffservactionentry();
        ~Diffservactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservactionid; //type: uint32
        ydk::YLeaf diffservactioninterface; //type: int32
        ydk::YLeaf diffservactionnext; //type: string
        ydk::YLeaf diffservactionspecific; //type: string
        ydk::YLeaf diffservactionstorage; //type: StorageType
        ydk::YLeaf diffservactionstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservactiontable::Diffservactionentry


class DIFFSERVMIB::Diffservdscpmarkacttable : public ydk::Entity
{
    public:
        Diffservdscpmarkacttable();
        ~Diffservdscpmarkacttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservdscpmarkactentry; //type: DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry> > diffservdscpmarkactentry;
        
}; // DIFFSERVMIB::Diffservdscpmarkacttable


class DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry : public ydk::Entity
{
    public:
        Diffservdscpmarkactentry();
        ~Diffservdscpmarkactentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservdscpmarkactdscp; //type: uint8

}; // DIFFSERVMIB::Diffservdscpmarkacttable::Diffservdscpmarkactentry


class DIFFSERVMIB::Diffservcountacttable : public ydk::Entity
{
    public:
        Diffservcountacttable();
        ~Diffservcountacttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservcountactentry; //type: DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry> > diffservcountactentry;
        
}; // DIFFSERVMIB::Diffservcountacttable


class DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry : public ydk::Entity
{
    public:
        Diffservcountactentry();
        ~Diffservcountactentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservcountactid; //type: uint32
        ydk::YLeaf diffservcountactoctets; //type: uint64
        ydk::YLeaf diffservcountactpkts; //type: uint64
        ydk::YLeaf diffservcountactstorage; //type: StorageType
        ydk::YLeaf diffservcountactstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservcountacttable::Diffservcountactentry


class DIFFSERVMIB::Diffservalgdroptable : public ydk::Entity
{
    public:
        Diffservalgdroptable();
        ~Diffservalgdroptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservalgdropentry; //type: DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry> > diffservalgdropentry;
        
}; // DIFFSERVMIB::Diffservalgdroptable


class DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry : public ydk::Entity
{
    public:
        Diffservalgdropentry();
        ~Diffservalgdropentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        ydk::YLeaf diffservalgdropstorage; //type: StorageType
        ydk::YLeaf diffservalgdropstatus; //type: RowStatus
        class Diffservalgdroptype;

}; // DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry


class DIFFSERVMIB::Diffservrandomdroptable : public ydk::Entity
{
    public:
        Diffservrandomdroptable();
        ~Diffservrandomdroptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservrandomdropentry; //type: DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry> > diffservrandomdropentry;
        
}; // DIFFSERVMIB::Diffservrandomdroptable


class DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry : public ydk::Entity
{
    public:
        Diffservrandomdropentry();
        ~Diffservrandomdropentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservrandomdropid; //type: uint32
        ydk::YLeaf diffservrandomdropminthreshbytes; //type: uint32
        ydk::YLeaf diffservrandomdropminthreshpkts; //type: uint32
        ydk::YLeaf diffservrandomdropmaxthreshbytes; //type: uint32
        ydk::YLeaf diffservrandomdropmaxthreshpkts; //type: uint32
        ydk::YLeaf diffservrandomdropprobmax; //type: uint32
        ydk::YLeaf diffservrandomdropweight; //type: uint32
        ydk::YLeaf diffservrandomdropsamplingrate; //type: uint32
        ydk::YLeaf diffservrandomdropstorage; //type: StorageType
        ydk::YLeaf diffservrandomdropstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservrandomdroptable::Diffservrandomdropentry


class DIFFSERVMIB::Diffservqtable : public ydk::Entity
{
    public:
        Diffservqtable();
        ~Diffservqtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservqentry; //type: DIFFSERVMIB::Diffservqtable::Diffservqentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservqtable::Diffservqentry> > diffservqentry;
        
}; // DIFFSERVMIB::Diffservqtable


class DIFFSERVMIB::Diffservqtable::Diffservqentry : public ydk::Entity
{
    public:
        Diffservqentry();
        ~Diffservqentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservqid; //type: uint32
        ydk::YLeaf diffservqnext; //type: string
        ydk::YLeaf diffservqminrate; //type: string
        ydk::YLeaf diffservqmaxrate; //type: string
        ydk::YLeaf diffservqstorage; //type: StorageType
        ydk::YLeaf diffservqstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservqtable::Diffservqentry


class DIFFSERVMIB::Diffservschedulertable : public ydk::Entity
{
    public:
        Diffservschedulertable();
        ~Diffservschedulertable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservschedulerentry; //type: DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry> > diffservschedulerentry;
        
}; // DIFFSERVMIB::Diffservschedulertable


class DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry : public ydk::Entity
{
    public:
        Diffservschedulerentry();
        ~Diffservschedulerentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservschedulerid; //type: uint32
        ydk::YLeaf diffservschedulernext; //type: string
        ydk::YLeaf diffservschedulermethod; //type: string
        ydk::YLeaf diffservschedulerminrate; //type: string
        ydk::YLeaf diffservschedulermaxrate; //type: string
        ydk::YLeaf diffservschedulerstorage; //type: StorageType
        ydk::YLeaf diffservschedulerstatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservschedulertable::Diffservschedulerentry


class DIFFSERVMIB::Diffservminratetable : public ydk::Entity
{
    public:
        Diffservminratetable();
        ~Diffservminratetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservminrateentry; //type: DIFFSERVMIB::Diffservminratetable::Diffservminrateentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservminratetable::Diffservminrateentry> > diffservminrateentry;
        
}; // DIFFSERVMIB::Diffservminratetable


class DIFFSERVMIB::Diffservminratetable::Diffservminrateentry : public ydk::Entity
{
    public:
        Diffservminrateentry();
        ~Diffservminrateentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservminrateid; //type: uint32
        ydk::YLeaf diffservminratepriority; //type: uint32
        ydk::YLeaf diffservminrateabsolute; //type: uint32
        ydk::YLeaf diffservminraterelative; //type: uint32
        ydk::YLeaf diffservminratestorage; //type: StorageType
        ydk::YLeaf diffservminratestatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservminratetable::Diffservminrateentry


class DIFFSERVMIB::Diffservmaxratetable : public ydk::Entity
{
    public:
        Diffservmaxratetable();
        ~Diffservmaxratetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Diffservmaxrateentry; //type: DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIFFSERV_MIB::DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry> > diffservmaxrateentry;
        
}; // DIFFSERVMIB::Diffservmaxratetable


class DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry : public ydk::Entity
{
    public:
        Diffservmaxrateentry();
        ~Diffservmaxrateentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf diffservmaxrateid; //type: uint32
        ydk::YLeaf diffservmaxratelevel; //type: uint32
        ydk::YLeaf diffservmaxrateabsolute; //type: uint32
        ydk::YLeaf diffservmaxraterelative; //type: uint32
        ydk::YLeaf diffservmaxratethreshold; //type: int32
        ydk::YLeaf diffservmaxratestorage; //type: StorageType
        ydk::YLeaf diffservmaxratestatus; //type: RowStatus

}; // DIFFSERVMIB::Diffservmaxratetable::Diffservmaxrateentry

class IfDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;

};

class DIFFSERVMIB::Diffservalgdroptable::Diffservalgdropentry::Diffservalgdroptype : public ydk::Enum
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

