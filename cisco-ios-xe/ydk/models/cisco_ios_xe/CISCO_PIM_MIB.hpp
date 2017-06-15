#ifndef _CISCO_PIM_MIB_
#define _CISCO_PIM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_PIM_MIB {

class CiscoPimMib : public Entity
{
    public:
        CiscoPimMib();
        ~CiscoPimMib();

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

        class Cpim; //type: CiscoPimMib::Cpim
        class Ciscopimmibnotificationobjects; //type: CiscoPimMib::Ciscopimmibnotificationobjects

        std::shared_ptr<CISCO_PIM_MIB::CiscoPimMib::Ciscopimmibnotificationobjects> ciscopimmibnotificationobjects_;
        std::shared_ptr<CISCO_PIM_MIB::CiscoPimMib::Cpim> cpim_;
        
}; // CiscoPimMib


class CiscoPimMib::Cpim : public Entity
{
    public:
        Cpim();
        ~Cpim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpiminvalidregistermsgsrcvd; //type: uint32
        YLeaf cpiminvalidjoinprunemsgsrcvd; //type: uint32
        YLeaf cpimlasterrortype; //type: CpimlasterrortypeEnum
        YLeaf cpimlasterrororigintype; //type: InetaddresstypeEnum
        YLeaf cpimlasterrororigin; //type: binary
        YLeaf cpimlasterrorgrouptype; //type: InetaddresstypeEnum
        YLeaf cpimlasterrorgroup; //type: binary
        YLeaf cpimlasterrorrptype; //type: InetaddresstypeEnum
        YLeaf cpimlasterrorrp; //type: binary
        class CpimlasterrortypeEnum;

}; // CiscoPimMib::Cpim


class CiscoPimMib::Ciscopimmibnotificationobjects : public Entity
{
    public:
        Ciscopimmibnotificationobjects();
        ~Ciscopimmibnotificationobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpimrpmappingchangetype; //type: CpimrpmappingchangetypeEnum
        class CpimrpmappingchangetypeEnum;

}; // CiscoPimMib::Ciscopimmibnotificationobjects

class CiscoPimMib::Cpim::CpimlasterrortypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf invalidRegister;
        static const Enum::YLeaf invalidJoinPrune;

};

class CiscoPimMib::Ciscopimmibnotificationobjects::CpimrpmappingchangetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf newMapping;
        static const Enum::YLeaf deletedMapping;
        static const Enum::YLeaf modifiedOldMapping;
        static const Enum::YLeaf modifiedNewMapping;

};


}
}

#endif /* _CISCO_PIM_MIB_ */

