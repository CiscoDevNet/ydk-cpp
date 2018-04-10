#ifndef _CISCO_POWER_ETHERNET_EXT_MIB_
#define _CISCO_POWER_ETHERNET_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_POWER_ETHERNET_EXT_MIB {

class CISCOPOWERETHERNETEXTMIB : public ydk::Entity
{
    public:
        CISCOPOWERETHERNETEXTMIB();
        ~CISCOPOWERETHERNETEXTMIB();

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

        class Cpeextmibobjects; //type: CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects
        class Cpeextpdstatistics; //type: CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics
        class Cpeextmainpsetable; //type: CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable
        class Cpeextpdstatstable; //type: CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable
        class Cpeextpseportlldptable; //type: CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable

        std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects> cpeextmibobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics> cpeextpdstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable> cpeextmainpsetable;
        std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable> cpeextpdstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable> cpeextpseportlldptable;
        
}; // CISCOPOWERETHERNETEXTMIB


class CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects : public ydk::Entity
{
    public:
        Cpeextmibobjects();
        ~Cpeextmibobjects();

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

        ydk::YLeaf cpeextdefaultallocation; //type: uint32
        ydk::YLeaf cpeextpolicingnotifenable; //type: boolean
        ydk::YLeaf cpeextpowerpriorityenable; //type: boolean

}; // CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects


class CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics : public ydk::Entity
{
    public:
        Cpeextpdstatistics();
        ~Cpeextpdstatistics();

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

        ydk::YLeaf cpeextpdstatstotaldevices; //type: uint32

}; // CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics


class CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable : public ydk::Entity
{
    public:
        Cpeextmainpsetable();
        ~Cpeextmainpsetable();

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

        class Cpeextmainpseentry; //type: CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry> > cpeextmainpseentry;
        
}; // CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable


class CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry : public ydk::Entity
{
    public:
        Cpeextmainpseentry();
        ~Cpeextmainpseentry();

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

        //type: int32 (refers to cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::pethmainpsegroupindex)
        ydk::YLeaf pethmainpsegroupindex;
        ydk::YLeaf cpeextmainpseentphyindex; //type: int32
        ydk::YLeaf cpeextmainpsedescr; //type: string
        ydk::YLeaf cpeextmainpsepwrmonitorcapable; //type: boolean
        ydk::YLeaf cpeextmainpseusedpower; //type: uint32
        ydk::YLeaf cpeextmainpseremainingpower; //type: uint32

}; // CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry


class CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable : public ydk::Entity
{
    public:
        Cpeextpdstatstable();
        ~Cpeextpdstatstable();

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

        class Cpeextpdstatsentry; //type: CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry> > cpeextpdstatsentry;
        
}; // CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable


class CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry : public ydk::Entity
{
    public:
        Cpeextpdstatsentry();
        ~Cpeextpdstatsentry();

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

        ydk::YLeaf cpeextpdstatsclass; //type: Cpeextpdstatsclass
        ydk::YLeaf cpeextpdstatsdevicecount; //type: uint32
        class Cpeextpdstatsclass;

}; // CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry


class CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable : public ydk::Entity
{
    public:
        Cpeextpseportlldptable();
        ~Cpeextpseportlldptable();

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

        class Cpeextpseportlldpentry; //type: CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_POWER_ETHERNET_EXT_MIB::CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry> > cpeextpseportlldpentry;
        
}; // CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable


class CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry : public ydk::Entity
{
    public:
        Cpeextpseportlldpentry();
        ~Cpeextpseportlldpentry();

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

        //type: int32 (refers to cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::pethpseportgroupindex)
        ydk::YLeaf pethpseportgroupindex;
        //type: int32 (refers to cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::pethpseportindex)
        ydk::YLeaf pethpseportindex;
        ydk::YLeaf cpeextpseportlldppwrtype; //type: CpeExtLldpPwrType
        ydk::YLeaf cpeextpseportlldppdpwrtype; //type: CpeExtLldpPwrType
        ydk::YLeaf cpeextpseportlldppwrsrc; //type: CpeExtLldpPwrSrc
        ydk::YLeaf cpeextpseportlldppdpwrsrc; //type: CpeExtLldpPwrSrc
        ydk::YLeaf cpeextpseportlldppwrpriority; //type: CpeExtPwrPriority
        ydk::YLeaf cpeextpseportlldppdpwrpriority; //type: CpeExtPwrPriority
        ydk::YLeaf cpeextpseportlldppwrreq; //type: uint32
        ydk::YLeaf cpeextpseportlldppdpwrreq; //type: uint32
        ydk::YLeaf cpeextpseportlldppwralloc; //type: uint32
        ydk::YLeaf cpeextpseportlldppdpwralloc; //type: uint32

}; // CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry

class CpeExtLldpPwrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1Pd;
        static const ydk::Enum::YLeaf type1Pse;
        static const ydk::Enum::YLeaf type2Pd;
        static const ydk::Enum::YLeaf type2Pse;

};

class CpeExtLldpPwrSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pseAndLocal;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf pse;
        static const ydk::Enum::YLeaf backupSrc;
        static const ydk::Enum::YLeaf primarySrc;
        static const ydk::Enum::YLeaf unknown;

};

class CpeExtPwrPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf unknown;

};

class CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf class0;
        static const ydk::Enum::YLeaf class1;
        static const ydk::Enum::YLeaf class2;
        static const ydk::Enum::YLeaf class3;
        static const ydk::Enum::YLeaf class4;

};


}
}

#endif /* _CISCO_POWER_ETHERNET_EXT_MIB_ */

