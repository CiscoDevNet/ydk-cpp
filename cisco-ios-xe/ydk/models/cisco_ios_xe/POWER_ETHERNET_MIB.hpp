#ifndef _POWER_ETHERNET_MIB_
#define _POWER_ETHERNET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace POWER_ETHERNET_MIB {

class POWERETHERNETMIB : public ydk::Entity
{
    public:
        POWERETHERNETMIB();
        ~POWERETHERNETMIB();

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

        class Pethpseporttable; //type: POWERETHERNETMIB::Pethpseporttable
        class Pethmainpsetable; //type: POWERETHERNETMIB::Pethmainpsetable
        class Pethnotificationcontroltable; //type: POWERETHERNETMIB::Pethnotificationcontroltable

        std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethpseporttable> pethpseporttable;
        std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethmainpsetable> pethmainpsetable;
        std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethnotificationcontroltable> pethnotificationcontroltable;
        
}; // POWERETHERNETMIB


class POWERETHERNETMIB::Pethpseporttable : public ydk::Entity
{
    public:
        Pethpseporttable();
        ~Pethpseporttable();

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

        class Pethpseportentry; //type: POWERETHERNETMIB::Pethpseporttable::Pethpseportentry

        std::vector<std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethpseporttable::Pethpseportentry> > pethpseportentry;
        
}; // POWERETHERNETMIB::Pethpseporttable


class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry : public ydk::Entity
{
    public:
        Pethpseportentry();
        ~Pethpseportentry();

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

        ydk::YLeaf pethpseportgroupindex; //type: int32
        ydk::YLeaf pethpseportindex; //type: int32
        ydk::YLeaf pethpseportadminenable; //type: boolean
        ydk::YLeaf pethpseportpowerpairscontrolability; //type: boolean
        ydk::YLeaf pethpseportpowerpairs; //type: Pethpseportpowerpairs
        ydk::YLeaf pethpseportdetectionstatus; //type: Pethpseportdetectionstatus
        ydk::YLeaf pethpseportpowerpriority; //type: Pethpseportpowerpriority
        ydk::YLeaf pethpseportmpsabsentcounter; //type: uint32
        ydk::YLeaf pethpseporttype; //type: string
        ydk::YLeaf pethpseportpowerclassifications; //type: Pethpseportpowerclassifications
        ydk::YLeaf pethpseportinvalidsignaturecounter; //type: uint32
        ydk::YLeaf pethpseportpowerdeniedcounter; //type: uint32
        ydk::YLeaf pethpseportoverloadcounter; //type: uint32
        ydk::YLeaf pethpseportshortcounter; //type: uint32
        ydk::YLeaf cpeextpseportenable; //type: Cpeextpseportenable
        ydk::YLeaf cpeextpseportdiscovermode; //type: Cpeextpseportdiscovermode
        ydk::YLeaf cpeextpseportdevicedetected; //type: boolean
        ydk::YLeaf cpeextpseportieeepd; //type: boolean
        ydk::YLeaf cpeextpseportadditionalstatus; //type: Cpeextpseportadditionalstatus
        ydk::YLeaf cpeextpseportpwrmax; //type: uint32
        ydk::YLeaf cpeextpseportpwrallocated; //type: uint32
        ydk::YLeaf cpeextpseportpwravailable; //type: uint32
        ydk::YLeaf cpeextpseportpwrconsumption; //type: uint32
        ydk::YLeaf cpeextpseportmaxpwrdrawn; //type: uint32
        ydk::YLeaf cpeextpseportentphyindex; //type: int32
        ydk::YLeaf cpeextpseportpolicingcapable; //type: boolean
        ydk::YLeaf cpeextpseportpolicingenable; //type: Cpeextpseportpolicingenable
        ydk::YLeaf cpeextpseportpolicingaction; //type: Cpeextpseportpolicingaction
        ydk::YLeaf cpeextpseportpwrmanalloc; //type: uint32
        ydk::YLeaf cpeextpseportcapabilities; //type: Cpeextpseportcapabilities
        class Pethpseportpowerpairs;
        class Pethpseportdetectionstatus;
        class Pethpseportpowerpriority;
        class Pethpseportpowerclassifications;
        class Cpeextpseportenable;
        class Cpeextpseportdiscovermode;
        class Cpeextpseportpolicingenable;
        class Cpeextpseportpolicingaction;

}; // POWERETHERNETMIB::Pethpseporttable::Pethpseportentry


class POWERETHERNETMIB::Pethmainpsetable : public ydk::Entity
{
    public:
        Pethmainpsetable();
        ~Pethmainpsetable();

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

        class Pethmainpseentry; //type: POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry

        std::vector<std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry> > pethmainpseentry;
        
}; // POWERETHERNETMIB::Pethmainpsetable


class POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry : public ydk::Entity
{
    public:
        Pethmainpseentry();
        ~Pethmainpseentry();

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

        ydk::YLeaf pethmainpsegroupindex; //type: int32
        ydk::YLeaf pethmainpsepower; //type: uint32
        ydk::YLeaf pethmainpseoperstatus; //type: Pethmainpseoperstatus
        ydk::YLeaf pethmainpseconsumptionpower; //type: uint32
        ydk::YLeaf pethmainpseusagethreshold; //type: int32
        class Pethmainpseoperstatus;

}; // POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry


class POWERETHERNETMIB::Pethnotificationcontroltable : public ydk::Entity
{
    public:
        Pethnotificationcontroltable();
        ~Pethnotificationcontroltable();

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

        class Pethnotificationcontrolentry; //type: POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry> > pethnotificationcontrolentry;
        
}; // POWERETHERNETMIB::Pethnotificationcontroltable


class POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry : public ydk::Entity
{
    public:
        Pethnotificationcontrolentry();
        ~Pethnotificationcontrolentry();

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

        ydk::YLeaf pethnotificationcontrolgroupindex; //type: int32
        ydk::YLeaf pethnotificationcontrolenable; //type: boolean

}; // POWERETHERNETMIB::Pethnotificationcontroltable::Pethnotificationcontrolentry

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpairs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf signal;
        static const ydk::Enum::YLeaf spare;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportdetectionstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf searching;
        static const ydk::Enum::YLeaf deliveringPower;
        static const ydk::Enum::YLeaf fault;
        static const ydk::Enum::YLeaf test;
        static const ydk::Enum::YLeaf otherFault;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerpriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf low;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Pethpseportpowerclassifications : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class0;
        static const ydk::Enum::YLeaf class1;
        static const ydk::Enum::YLeaf class2;
        static const ydk::Enum::YLeaf class3;
        static const ydk::Enum::YLeaf class4;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf limit;
        static const ydk::Enum::YLeaf disable;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportdiscovermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ieeeAndCisco;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportpolicingenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class POWERETHERNETMIB::Pethpseporttable::Pethpseportentry::Cpeextpseportpolicingaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf logOnly;

};

class POWERETHERNETMIB::Pethmainpsetable::Pethmainpseentry::Pethmainpseoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf faulty;

};


}
}

#endif /* _POWER_ETHERNET_MIB_ */

