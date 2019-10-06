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

        class PethPsePortTable; //type: POWERETHERNETMIB::PethPsePortTable
        class PethMainPseTable; //type: POWERETHERNETMIB::PethMainPseTable
        class PethNotificationControlTable; //type: POWERETHERNETMIB::PethNotificationControlTable

        std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::PethPsePortTable> pethpseporttable;
        std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::PethMainPseTable> pethmainpsetable;
        std::shared_ptr<cisco_ios_xe::POWER_ETHERNET_MIB::POWERETHERNETMIB::PethNotificationControlTable> pethnotificationcontroltable;
        
}; // POWERETHERNETMIB


class POWERETHERNETMIB::PethPsePortTable : public ydk::Entity
{
    public:
        PethPsePortTable();
        ~PethPsePortTable();

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

        class PethPsePortEntry; //type: POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry

        ydk::YList pethpseportentry;
        
}; // POWERETHERNETMIB::PethPsePortTable


class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry : public ydk::Entity
{
    public:
        PethPsePortEntry();
        ~PethPsePortEntry();

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
        ydk::YLeaf pethpseportpowerpairs; //type: PethPsePortPowerPairs
        ydk::YLeaf pethpseportdetectionstatus; //type: PethPsePortDetectionStatus
        ydk::YLeaf pethpseportpowerpriority; //type: PethPsePortPowerPriority
        ydk::YLeaf pethpseportmpsabsentcounter; //type: uint32
        ydk::YLeaf pethpseporttype; //type: string
        ydk::YLeaf pethpseportpowerclassifications; //type: PethPsePortPowerClassifications
        ydk::YLeaf pethpseportinvalidsignaturecounter; //type: uint32
        ydk::YLeaf pethpseportpowerdeniedcounter; //type: uint32
        ydk::YLeaf pethpseportoverloadcounter; //type: uint32
        ydk::YLeaf pethpseportshortcounter; //type: uint32
        ydk::YLeaf cpeextpseportenable; //type: CpeExtPsePortEnable
        ydk::YLeaf cpeextpseportdiscovermode; //type: CpeExtPsePortDiscoverMode
        ydk::YLeaf cpeextpseportdevicedetected; //type: boolean
        ydk::YLeaf cpeextpseportieeepd; //type: boolean
        ydk::YLeaf cpeextpseportadditionalstatus; //type: CpeExtPsePortAdditionalStatus
        ydk::YLeaf cpeextpseportpwrmax; //type: uint32
        ydk::YLeaf cpeextpseportpwrallocated; //type: uint32
        ydk::YLeaf cpeextpseportpwravailable; //type: uint32
        ydk::YLeaf cpeextpseportpwrconsumption; //type: uint32
        ydk::YLeaf cpeextpseportmaxpwrdrawn; //type: uint32
        ydk::YLeaf cpeextpseportentphyindex; //type: int32
        ydk::YLeaf cpeextpseportpolicingcapable; //type: boolean
        ydk::YLeaf cpeextpseportpolicingenable; //type: CpeExtPsePortPolicingEnable
        ydk::YLeaf cpeextpseportpolicingaction; //type: CpeExtPsePortPolicingAction
        ydk::YLeaf cpeextpseportpwrmanalloc; //type: uint32
        ydk::YLeaf cpeextpseportcapabilities; //type: CpeExtPsePortCapabilities
        class PethPsePortPowerPairs;
        class PethPsePortDetectionStatus;
        class PethPsePortPowerPriority;
        class PethPsePortPowerClassifications;
        class CpeExtPsePortEnable;
        class CpeExtPsePortDiscoverMode;
        class CpeExtPsePortPolicingEnable;
        class CpeExtPsePortPolicingAction;

}; // POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry


class POWERETHERNETMIB::PethMainPseTable : public ydk::Entity
{
    public:
        PethMainPseTable();
        ~PethMainPseTable();

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

        class PethMainPseEntry; //type: POWERETHERNETMIB::PethMainPseTable::PethMainPseEntry

        ydk::YList pethmainpseentry;
        
}; // POWERETHERNETMIB::PethMainPseTable


class POWERETHERNETMIB::PethMainPseTable::PethMainPseEntry : public ydk::Entity
{
    public:
        PethMainPseEntry();
        ~PethMainPseEntry();

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
        ydk::YLeaf pethmainpseoperstatus; //type: PethMainPseOperStatus
        ydk::YLeaf pethmainpseconsumptionpower; //type: uint32
        ydk::YLeaf pethmainpseusagethreshold; //type: int32
        class PethMainPseOperStatus;

}; // POWERETHERNETMIB::PethMainPseTable::PethMainPseEntry


class POWERETHERNETMIB::PethNotificationControlTable : public ydk::Entity
{
    public:
        PethNotificationControlTable();
        ~PethNotificationControlTable();

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

        class PethNotificationControlEntry; //type: POWERETHERNETMIB::PethNotificationControlTable::PethNotificationControlEntry

        ydk::YList pethnotificationcontrolentry;
        
}; // POWERETHERNETMIB::PethNotificationControlTable


class POWERETHERNETMIB::PethNotificationControlTable::PethNotificationControlEntry : public ydk::Entity
{
    public:
        PethNotificationControlEntry();
        ~PethNotificationControlEntry();

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

}; // POWERETHERNETMIB::PethNotificationControlTable::PethNotificationControlEntry

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::PethPsePortPowerPairs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf signal;
        static const ydk::Enum::YLeaf spare;

        static int get_enum_value(const std::string & name) {
            if (name == "signal") return 1;
            if (name == "spare") return 2;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::PethPsePortDetectionStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf searching;
        static const ydk::Enum::YLeaf deliveringPower;
        static const ydk::Enum::YLeaf fault;
        static const ydk::Enum::YLeaf test;
        static const ydk::Enum::YLeaf otherFault;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "searching") return 2;
            if (name == "deliveringPower") return 3;
            if (name == "fault") return 4;
            if (name == "test") return 5;
            if (name == "otherFault") return 6;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::PethPsePortPowerPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf low;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 1;
            if (name == "high") return 2;
            if (name == "low") return 3;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::PethPsePortPowerClassifications : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class0;
        static const ydk::Enum::YLeaf class1;
        static const ydk::Enum::YLeaf class2;
        static const ydk::Enum::YLeaf class3;
        static const ydk::Enum::YLeaf class4;

        static int get_enum_value(const std::string & name) {
            if (name == "class0") return 1;
            if (name == "class1") return 2;
            if (name == "class2") return 3;
            if (name == "class3") return 4;
            if (name == "class4") return 5;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::CpeExtPsePortEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf limit;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "static") return 2;
            if (name == "limit") return 3;
            if (name == "disable") return 4;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::CpeExtPsePortDiscoverMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ieeeAndCisco;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "off") return 2;
            if (name == "ieee") return 3;
            if (name == "cisco") return 4;
            if (name == "ieeeAndCisco") return 5;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::CpeExtPsePortPolicingEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            if (name == "off") return 2;
            return -1;
        }
};

class POWERETHERNETMIB::PethPsePortTable::PethPsePortEntry::CpeExtPsePortPolicingAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf logOnly;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 1;
            if (name == "logOnly") return 2;
            return -1;
        }
};

class POWERETHERNETMIB::PethMainPseTable::PethMainPseEntry::PethMainPseOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf faulty;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            if (name == "off") return 2;
            if (name == "faulty") return 3;
            return -1;
        }
};


}
}

#endif /* _POWER_ETHERNET_MIB_ */

