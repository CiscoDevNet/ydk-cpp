#ifndef _CISCO_ENVMON_MIB_
#define _CISCO_ENVMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENVMON_MIB {

class CISCOENVMONMIB : public ydk::Entity
{
    public:
        CISCOENVMONMIB();
        ~CISCOENVMONMIB();

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

        class CiscoEnvMonObjects; //type: CISCOENVMONMIB::CiscoEnvMonObjects
        class CiscoEnvMonMIBNotificationEnables; //type: CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables
        class CiscoEnvMonVoltageStatusTable; //type: CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable
        class CiscoEnvMonTemperatureStatusTable; //type: CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable
        class CiscoEnvMonFanStatusTable; //type: CISCOENVMONMIB::CiscoEnvMonFanStatusTable
        class CiscoEnvMonSupplyStatusTable; //type: CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable

        std::shared_ptr<cisco_ios_xe::CISCO_ENVMON_MIB::CISCOENVMONMIB::CiscoEnvMonObjects> ciscoenvmonobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_ENVMON_MIB::CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables> ciscoenvmonmibnotificationenables;
        std::shared_ptr<cisco_ios_xe::CISCO_ENVMON_MIB::CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable> ciscoenvmonvoltagestatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENVMON_MIB::CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable> ciscoenvmontemperaturestatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENVMON_MIB::CISCOENVMONMIB::CiscoEnvMonFanStatusTable> ciscoenvmonfanstatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENVMON_MIB::CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable> ciscoenvmonsupplystatustable;
        
}; // CISCOENVMONMIB


class CISCOENVMONMIB::CiscoEnvMonObjects : public ydk::Entity
{
    public:
        CiscoEnvMonObjects();
        ~CiscoEnvMonObjects();

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

        ydk::YLeaf ciscoenvmonpresent; //type: CiscoEnvMonPresent
        ydk::YLeaf ciscoenvmonalarmcontacts; //type: CiscoEnvMonAlarmContacts
        class CiscoEnvMonPresent;

}; // CISCOENVMONMIB::CiscoEnvMonObjects


class CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables : public ydk::Entity
{
    public:
        CiscoEnvMonMIBNotificationEnables();
        ~CiscoEnvMonMIBNotificationEnables();

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

        ydk::YLeaf ciscoenvmonenableshutdownnotification; //type: boolean
        ydk::YLeaf ciscoenvmonenablevoltagenotification; //type: boolean
        ydk::YLeaf ciscoenvmonenabletemperaturenotification; //type: boolean
        ydk::YLeaf ciscoenvmonenablefannotification; //type: boolean
        ydk::YLeaf ciscoenvmonenableredundantsupplynotification; //type: boolean
        ydk::YLeaf ciscoenvmonenablestatchangenotif; //type: boolean

}; // CISCOENVMONMIB::CiscoEnvMonMIBNotificationEnables


class CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable : public ydk::Entity
{
    public:
        CiscoEnvMonVoltageStatusTable();
        ~CiscoEnvMonVoltageStatusTable();

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

        class CiscoEnvMonVoltageStatusEntry; //type: CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry

        ydk::YList ciscoenvmonvoltagestatusentry;
        
}; // CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable


class CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry : public ydk::Entity
{
    public:
        CiscoEnvMonVoltageStatusEntry();
        ~CiscoEnvMonVoltageStatusEntry();

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

        ydk::YLeaf ciscoenvmonvoltagestatusindex; //type: int32
        ydk::YLeaf ciscoenvmonvoltagestatusdescr; //type: string
        ydk::YLeaf ciscoenvmonvoltagestatusvalue; //type: int32
        ydk::YLeaf ciscoenvmonvoltagethresholdlow; //type: int32
        ydk::YLeaf ciscoenvmonvoltagethresholdhigh; //type: int32
        ydk::YLeaf ciscoenvmonvoltagelastshutdown; //type: int32
        ydk::YLeaf ciscoenvmonvoltagestate; //type: CiscoEnvMonState

}; // CISCOENVMONMIB::CiscoEnvMonVoltageStatusTable::CiscoEnvMonVoltageStatusEntry


class CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable : public ydk::Entity
{
    public:
        CiscoEnvMonTemperatureStatusTable();
        ~CiscoEnvMonTemperatureStatusTable();

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

        class CiscoEnvMonTemperatureStatusEntry; //type: CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry

        ydk::YList ciscoenvmontemperaturestatusentry;
        
}; // CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable


class CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry : public ydk::Entity
{
    public:
        CiscoEnvMonTemperatureStatusEntry();
        ~CiscoEnvMonTemperatureStatusEntry();

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

        ydk::YLeaf ciscoenvmontemperaturestatusindex; //type: int32
        ydk::YLeaf ciscoenvmontemperaturestatusdescr; //type: string
        ydk::YLeaf ciscoenvmontemperaturestatusvalue; //type: uint32
        ydk::YLeaf ciscoenvmontemperaturethreshold; //type: int32
        ydk::YLeaf ciscoenvmontemperaturelastshutdown; //type: int32
        ydk::YLeaf ciscoenvmontemperaturestate; //type: CiscoEnvMonState

}; // CISCOENVMONMIB::CiscoEnvMonTemperatureStatusTable::CiscoEnvMonTemperatureStatusEntry


class CISCOENVMONMIB::CiscoEnvMonFanStatusTable : public ydk::Entity
{
    public:
        CiscoEnvMonFanStatusTable();
        ~CiscoEnvMonFanStatusTable();

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

        class CiscoEnvMonFanStatusEntry; //type: CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry

        ydk::YList ciscoenvmonfanstatusentry;
        
}; // CISCOENVMONMIB::CiscoEnvMonFanStatusTable


class CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry : public ydk::Entity
{
    public:
        CiscoEnvMonFanStatusEntry();
        ~CiscoEnvMonFanStatusEntry();

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

        ydk::YLeaf ciscoenvmonfanstatusindex; //type: int32
        ydk::YLeaf ciscoenvmonfanstatusdescr; //type: string
        ydk::YLeaf ciscoenvmonfanstate; //type: CiscoEnvMonState

}; // CISCOENVMONMIB::CiscoEnvMonFanStatusTable::CiscoEnvMonFanStatusEntry


class CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable : public ydk::Entity
{
    public:
        CiscoEnvMonSupplyStatusTable();
        ~CiscoEnvMonSupplyStatusTable();

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

        class CiscoEnvMonSupplyStatusEntry; //type: CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry

        ydk::YList ciscoenvmonsupplystatusentry;
        
}; // CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable


class CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry : public ydk::Entity
{
    public:
        CiscoEnvMonSupplyStatusEntry();
        ~CiscoEnvMonSupplyStatusEntry();

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

        ydk::YLeaf ciscoenvmonsupplystatusindex; //type: int32
        ydk::YLeaf ciscoenvmonsupplystatusdescr; //type: string
        ydk::YLeaf ciscoenvmonsupplystate; //type: CiscoEnvMonState
        ydk::YLeaf ciscoenvmonsupplysource; //type: CiscoEnvMonSupplySource
        class CiscoEnvMonSupplySource;

}; // CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry

class CiscoEnvMonState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf notFunctioning;

};

class CISCOENVMONMIB::CiscoEnvMonObjects::CiscoEnvMonPresent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oldAgs;
        static const ydk::Enum::YLeaf ags;
        static const ydk::Enum::YLeaf c7000;
        static const ydk::Enum::YLeaf ci;
        static const ydk::Enum::YLeaf cAccessMon;
        static const ydk::Enum::YLeaf cat6000;
        static const ydk::Enum::YLeaf ubr7200;
        static const ydk::Enum::YLeaf cat4000;
        static const ydk::Enum::YLeaf c10000;
        static const ydk::Enum::YLeaf osr7600;
        static const ydk::Enum::YLeaf c7600;
        static const ydk::Enum::YLeaf c37xx;
        static const ydk::Enum::YLeaf other;

};

class CISCOENVMONMIB::CiscoEnvMonSupplyStatusTable::CiscoEnvMonSupplyStatusEntry::CiscoEnvMonSupplySource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ac;
        static const ydk::Enum::YLeaf dc;
        static const ydk::Enum::YLeaf externalPowerSupply;
        static const ydk::Enum::YLeaf internalRedundant;

};


}
}

#endif /* _CISCO_ENVMON_MIB_ */

