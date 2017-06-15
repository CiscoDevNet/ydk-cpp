#ifndef _CISCO_ENVMON_MIB_
#define _CISCO_ENVMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ENVMON_MIB {

class CiscoEnvmonMib : public Entity
{
    public:
        CiscoEnvmonMib();
        ~CiscoEnvmonMib();

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

        class Ciscoenvmonobjects; //type: CiscoEnvmonMib::Ciscoenvmonobjects
        class Ciscoenvmonmibnotificationenables; //type: CiscoEnvmonMib::Ciscoenvmonmibnotificationenables
        class Ciscoenvmonvoltagestatustable; //type: CiscoEnvmonMib::Ciscoenvmonvoltagestatustable
        class Ciscoenvmontemperaturestatustable; //type: CiscoEnvmonMib::Ciscoenvmontemperaturestatustable
        class Ciscoenvmonfanstatustable; //type: CiscoEnvmonMib::Ciscoenvmonfanstatustable
        class Ciscoenvmonsupplystatustable; //type: CiscoEnvmonMib::Ciscoenvmonsupplystatustable

        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonfanstatustable> ciscoenvmonfanstatustable_;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonmibnotificationenables> ciscoenvmonmibnotificationenables_;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonobjects> ciscoenvmonobjects_;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonsupplystatustable> ciscoenvmonsupplystatustable_;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmontemperaturestatustable> ciscoenvmontemperaturestatustable_;
        std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonvoltagestatustable> ciscoenvmonvoltagestatustable_;
        
}; // CiscoEnvmonMib


class CiscoEnvmonMib::Ciscoenvmonobjects : public Entity
{
    public:
        Ciscoenvmonobjects();
        ~Ciscoenvmonobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoenvmonpresent; //type: CiscoenvmonpresentEnum
        YLeaf ciscoenvmonalarmcontacts; //type: Ciscoenvmonalarmcontacts
        class CiscoenvmonpresentEnum;

}; // CiscoEnvmonMib::Ciscoenvmonobjects


class CiscoEnvmonMib::Ciscoenvmonmibnotificationenables : public Entity
{
    public:
        Ciscoenvmonmibnotificationenables();
        ~Ciscoenvmonmibnotificationenables();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoenvmonenableshutdownnotification; //type: boolean
        YLeaf ciscoenvmonenablevoltagenotification; //type: boolean
        YLeaf ciscoenvmonenabletemperaturenotification; //type: boolean
        YLeaf ciscoenvmonenablefannotification; //type: boolean
        YLeaf ciscoenvmonenableredundantsupplynotification; //type: boolean
        YLeaf ciscoenvmonenablestatchangenotif; //type: boolean

}; // CiscoEnvmonMib::Ciscoenvmonmibnotificationenables


class CiscoEnvmonMib::Ciscoenvmonvoltagestatustable : public Entity
{
    public:
        Ciscoenvmonvoltagestatustable();
        ~Ciscoenvmonvoltagestatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoenvmonvoltagestatusentry; //type: CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry> > ciscoenvmonvoltagestatusentry_;
        
}; // CiscoEnvmonMib::Ciscoenvmonvoltagestatustable


class CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry : public Entity
{
    public:
        Ciscoenvmonvoltagestatusentry();
        ~Ciscoenvmonvoltagestatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoenvmonvoltagestatusindex; //type: int32
        YLeaf ciscoenvmonvoltagestatusdescr; //type: string
        YLeaf ciscoenvmonvoltagestatusvalue; //type: int32
        YLeaf ciscoenvmonvoltagethresholdlow; //type: int32
        YLeaf ciscoenvmonvoltagethresholdhigh; //type: int32
        YLeaf ciscoenvmonvoltagelastshutdown; //type: int32
        YLeaf ciscoenvmonvoltagestate; //type: CiscoenvmonstateEnum

}; // CiscoEnvmonMib::Ciscoenvmonvoltagestatustable::Ciscoenvmonvoltagestatusentry


class CiscoEnvmonMib::Ciscoenvmontemperaturestatustable : public Entity
{
    public:
        Ciscoenvmontemperaturestatustable();
        ~Ciscoenvmontemperaturestatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoenvmontemperaturestatusentry; //type: CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry> > ciscoenvmontemperaturestatusentry_;
        
}; // CiscoEnvmonMib::Ciscoenvmontemperaturestatustable


class CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry : public Entity
{
    public:
        Ciscoenvmontemperaturestatusentry();
        ~Ciscoenvmontemperaturestatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoenvmontemperaturestatusindex; //type: int32
        YLeaf ciscoenvmontemperaturestatusdescr; //type: string
        YLeaf ciscoenvmontemperaturestatusvalue; //type: uint32
        YLeaf ciscoenvmontemperaturethreshold; //type: int32
        YLeaf ciscoenvmontemperaturelastshutdown; //type: int32
        YLeaf ciscoenvmontemperaturestate; //type: CiscoenvmonstateEnum

}; // CiscoEnvmonMib::Ciscoenvmontemperaturestatustable::Ciscoenvmontemperaturestatusentry


class CiscoEnvmonMib::Ciscoenvmonfanstatustable : public Entity
{
    public:
        Ciscoenvmonfanstatustable();
        ~Ciscoenvmonfanstatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoenvmonfanstatusentry; //type: CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry> > ciscoenvmonfanstatusentry_;
        
}; // CiscoEnvmonMib::Ciscoenvmonfanstatustable


class CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry : public Entity
{
    public:
        Ciscoenvmonfanstatusentry();
        ~Ciscoenvmonfanstatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoenvmonfanstatusindex; //type: int32
        YLeaf ciscoenvmonfanstatusdescr; //type: string
        YLeaf ciscoenvmonfanstate; //type: CiscoenvmonstateEnum

}; // CiscoEnvmonMib::Ciscoenvmonfanstatustable::Ciscoenvmonfanstatusentry


class CiscoEnvmonMib::Ciscoenvmonsupplystatustable : public Entity
{
    public:
        Ciscoenvmonsupplystatustable();
        ~Ciscoenvmonsupplystatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoenvmonsupplystatusentry; //type: CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry

        std::vector<std::shared_ptr<CISCO_ENVMON_MIB::CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry> > ciscoenvmonsupplystatusentry_;
        
}; // CiscoEnvmonMib::Ciscoenvmonsupplystatustable


class CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry : public Entity
{
    public:
        Ciscoenvmonsupplystatusentry();
        ~Ciscoenvmonsupplystatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoenvmonsupplystatusindex; //type: int32
        YLeaf ciscoenvmonsupplystatusdescr; //type: string
        YLeaf ciscoenvmonsupplystate; //type: CiscoenvmonstateEnum
        YLeaf ciscoenvmonsupplysource; //type: CiscoenvmonsupplysourceEnum
        class CiscoenvmonsupplysourceEnum;

}; // CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry

class CiscoenvmonstateEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf shutdown;
        static const Enum::YLeaf notPresent;
        static const Enum::YLeaf notFunctioning;

};

class CiscoEnvmonMib::Ciscoenvmonobjects::CiscoenvmonpresentEnum : public Enum
{
    public:
        static const Enum::YLeaf oldAgs;
        static const Enum::YLeaf ags;
        static const Enum::YLeaf c7000;
        static const Enum::YLeaf ci;
        static const Enum::YLeaf cAccessMon;
        static const Enum::YLeaf cat6000;
        static const Enum::YLeaf ubr7200;
        static const Enum::YLeaf cat4000;
        static const Enum::YLeaf c10000;
        static const Enum::YLeaf osr7600;
        static const Enum::YLeaf c7600;
        static const Enum::YLeaf c37xx;
        static const Enum::YLeaf other;

};

class CiscoEnvmonMib::Ciscoenvmonsupplystatustable::Ciscoenvmonsupplystatusentry::CiscoenvmonsupplysourceEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ac;
        static const Enum::YLeaf dc;
        static const Enum::YLeaf externalPowerSupply;
        static const Enum::YLeaf internalRedundant;

};


}
}

#endif /* _CISCO_ENVMON_MIB_ */

