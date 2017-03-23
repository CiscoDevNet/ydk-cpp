#ifndef _OPENCONFIG_BGP_2_
#define _OPENCONFIG_BGP_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_bgp_0.hpp"
#include "openconfig_bgp_1.hpp"

namespace ydk {
namespace openconfig_bgp {


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State> state;


}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State> state;


}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State


}
}

#endif /* _OPENCONFIG_BGP_2_ */

