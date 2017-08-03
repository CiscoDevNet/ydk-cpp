#ifndef _CISCO_ENVMON_MIB_
#define _CISCO_ENVMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENVMON_MIB {

class CiscoEnvmonMib : public ydk::Entity
{
    public:
        CiscoEnvmonMib();
        ~CiscoEnvmonMib();

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

        class Ciscoenvmonobjects; //type: CiscoEnvmonMib::Ciscoenvmonobjects
        class Ciscoenvmonmibnotificationenables; //type: CiscoEnvmonMib::Ciscoenvmonmibnotificationenables
        class Ciscoenvmonvoltagestatustable; //type: CiscoEnvmonMib::Ciscoenvmonvoltagestatustable
        class Ciscoenvmontemperaturestatustable; //type: CiscoEnvmonMib::Ciscoenvmontemperaturestatustable
        class Ciscoenvmonfanstatustable; //type: CiscoEnvmonMib::Ciscoenvmonfanstatustable
        class Ciscoenvmonsupplystatustable; //type: CiscoEnvmonMib::Ciscoenvmonsupplystatustable

        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonfanstatustable> ciscoenvmonfanstatustable;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonmibnotificationenables> ciscoenvmonmibnotificationenables;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonobjects> ciscoenvmonobjects;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonsupplystatustable> ciscoenvmonsupplystatustable;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmontemperaturestatustable> ciscoenvmontemperaturestatustable;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonvoltagestatustable> ciscoenvmonvoltagestatustable;
        
}; // CiscoEnvmonMib


class CiscoEnvmonMib::Ciscoenvmonobjects : public ydk::Entity
{
    public:
        Ciscoenvmonobjects();
        ~Ciscoenvmonobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoenvmonpresent; //type: Ciscoenvmonpresent
        ydk::YLeaf ciscoenvmonalarmcontacts; //type: Ciscoenvmonalarmcontacts
        class Ciscoenvmonpresent;

}; // CiscoEnvmonMib::Ciscoenvmonobjects


class CiscoEnvmonMib::Ciscoenvmonmibnotificationenables : public ydk::Entity
{
    public:
        Ciscoenvmonmibnotificationenables();
        ~Ciscoenvmonmibnotificationenables();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoenvmonenableshutdownnotification; //type: boolean
        ydk::YLeaf ciscoenvmonenablevoltagenotification; //type: boolean
        ydk::YLeaf ciscoenvmonenabletemperaturenotification; //type: boolean
        ydk::YLeaf ciscoenvmonenablefannotification; //type: boolean
        ydk::YLeaf ciscoenvmonenableredundantsupplynotification; //type: boolean
        ydk::YLeaf ciscoenvmonenablestatchangenotif; //type: boolean

}; // CiscoEnvmonMib::Ciscoenvmonmibnotificationenables


class CiscoEnvmonMib::Ciscoenvmonvoltagestatustable : public ydk::Entity
{
    public:
        Ciscoenvmonvoltagestatustable();
        ~Ciscoenvmonvoltagestatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoenvmonvoltagestatusentry; //type: CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry> > ciscoenvmonvoltagestatusentry;
        
}; // CiscoEnvmonMib::Ciscoenvmonvoltagestatustable


class CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry : public ydk::Entity
{
    public:
        Ciscoenvmonvoltagestatusentry();
        ~Ciscoenvmonvoltagestatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoenvmonvoltagestatusindex; //type: int32
        ydk::YLeaf ciscoenvmonvoltagestatusdescr; //type: string
        ydk::YLeaf ciscoenvmonvoltagestatusvalue; //type: int32
        ydk::YLeaf ciscoenvmonvoltagethresholdlow; //type: int32
        ydk::YLeaf ciscoenvmonvoltagethresholdhigh; //type: int32
        ydk::YLeaf ciscoenvmonvoltagelastshutdown; //type: int32
        ydk::YLeaf ciscoenvmonvoltagestate; //type: Ciscoenvmonstate

}; // CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry


class CiscoEnvmonMib::Ciscoenvmontemperaturestatustable : public ydk::Entity
{
    public:
        Ciscoenvmontemperaturestatustable();
        ~Ciscoenvmontemperaturestatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoenvmontemperaturestatusentry; //type: CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry> > ciscoenvmontemperaturestatusentry;
        
}; // CiscoEnvmonMib::Ciscoenvmontemperaturestatustable


class CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry : public ydk::Entity
{
    public:
        Ciscoenvmontemperaturestatusentry();
        ~Ciscoenvmontemperaturestatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoenvmontemperaturestatusindex; //type: int32
        ydk::YLeaf ciscoenvmontemperaturestatusdescr; //type: string
        ydk::YLeaf ciscoenvmontemperaturestatusvalue; //type: uint32
        ydk::YLeaf ciscoenvmontemperaturethreshold; //type: int32
        ydk::YLeaf ciscoenvmontemperaturelastshutdown; //type: int32
        ydk::YLeaf ciscoenvmontemperaturestate; //type: Ciscoenvmonstate

}; // CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry


class CiscoEnvmonMib::Ciscoenvmonfanstatustable : public ydk::Entity
{
    public:
        Ciscoenvmonfanstatustable();
        ~Ciscoenvmonfanstatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoenvmonfanstatusentry; //type: CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry> > ciscoenvmonfanstatusentry;
        
}; // CiscoEnvmonMib::Ciscoenvmonfanstatustable


class CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry : public ydk::Entity
{
    public:
        Ciscoenvmonfanstatusentry();
        ~Ciscoenvmonfanstatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoenvmonfanstatusindex; //type: int32
        ydk::YLeaf ciscoenvmonfanstatusdescr; //type: string
        ydk::YLeaf ciscoenvmonfanstate; //type: Ciscoenvmonstate

}; // CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry


class CiscoEnvmonMib::Ciscoenvmonsupplystatustable : public ydk::Entity
{
    public:
        Ciscoenvmonsupplystatustable();
        ~Ciscoenvmonsupplystatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoenvmonsupplystatusentry; //type: CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry> > ciscoenvmonsupplystatusentry;
        
}; // CiscoEnvmonMib::Ciscoenvmonsupplystatustable


class CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry : public ydk::Entity
{
    public:
        Ciscoenvmonsupplystatusentry();
        ~Ciscoenvmonsupplystatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoenvmonsupplystatusindex; //type: int32
        ydk::YLeaf ciscoenvmonsupplystatusdescr; //type: string
        ydk::YLeaf ciscoenvmonsupplystate; //type: Ciscoenvmonstate
        ydk::YLeaf ciscoenvmonsupplysource; //type: Ciscoenvmonsupplysource
        class Ciscoenvmonsupplysource;

}; // CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry

class Ciscoenvmonstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf notFunctioning;

};

class CiscoEnvmonMib::Ciscoenvmonobjects::Ciscoenvmonpresent : public ydk::Enum
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

class CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::Ciscoenvmonsupplysource : public ydk::Enum
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

