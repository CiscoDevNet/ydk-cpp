#ifndef _TAILF_WEBUI_
#define _TAILF_WEBUI_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace tailf_webui {

class Webui : public Entity
{
    public:
        Webui();
        ~Webui();

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

        class Schematics; //type: Webui::Schematics
        class DataStores; //type: Webui::DataStores

        std::shared_ptr<tailf_webui::Webui::DataStores> data_stores_;
        std::shared_ptr<tailf_webui::Webui::Schematics> schematics_;
        
}; // Webui


class Webui::Schematics : public Entity
{
    public:
        Schematics();
        ~Schematics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Panels; //type: Webui::Schematics::Panels
        class Assets; //type: Webui::Schematics::Assets

        std::shared_ptr<tailf_webui::Webui::Schematics::Assets> assets_;
        std::shared_ptr<tailf_webui::Webui::Schematics::Panels> panels_;
        
}; // Webui::Schematics


class Webui::Schematics::Panels : public Entity
{
    public:
        Panels();
        ~Panels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Panel; //type: Webui::Schematics::Panels::Panel

        std::vector<std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel> > panel_;
        
}; // Webui::Schematics::Panels


class Webui::Schematics::Panels::Panel : public Entity
{
    public:
        Panel();
        ~Panel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Properties; //type: Webui::Schematics::Panels::Panel::Properties
        class Components; //type: Webui::Schematics::Panels::Panel::Components

        std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel::Components> components_;
        std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel::Properties> properties_;
        
}; // Webui::Schematics::Panels::Panel


class Webui::Schematics::Panels::Panel::Properties : public Entity
{
    public:
        Properties();
        ~Properties();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf title; //type: string
        YLeaf description; //type: string
        YLeaf width; //type: uint16
        YLeaf height; //type: uint16

}; // Webui::Schematics::Panels::Panel::Properties


class Webui::Schematics::Panels::Panel::Components : public Entity
{
    public:
        Components();
        ~Components();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Component; //type: Webui::Schematics::Panels::Panel::Components::Component

        std::vector<std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel::Components::Component> > component_;
        
}; // Webui::Schematics::Panels::Panel::Components


class Webui::Schematics::Panels::Panel::Components::Component : public Entity
{
    public:
        Component();
        ~Component();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class Properties; //type: Webui::Schematics::Panels::Panel::Components::Component::Properties

        std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel::Components::Component::Properties> properties_;
        
}; // Webui::Schematics::Panels::Panel::Components::Component


class Webui::Schematics::Panels::Panel::Components::Component::Properties : public Entity
{
    public:
        Properties();
        ~Properties();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf top; //type: uint16
        YLeaf left; //type: uint16
        YLeaf width; //type: uint16
        YLeaf height; //type: uint16
        YLeaf z_index; //type: int16
        class Image; //type: Webui::Schematics::Panels::Panel::Components::Component::Properties::Image
        class Link; //type: Webui::Schematics::Panels::Panel::Components::Component::Properties::Link

        std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel::Components::Component::Properties::Image> image_;
        std::shared_ptr<tailf_webui::Webui::Schematics::Panels::Panel::Components::Component::Properties::Link> link_;
        
}; // Webui::Schematics::Panels::Panel::Components::Component::Properties


class Webui::Schematics::Panels::Panel::Components::Component::Properties::Image : public Entity
{
    public:
        Image();
        ~Image();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to tailf_webui::Webui::Schematics::Assets::Asset::name)
        YLeaf image;

}; // Webui::Schematics::Panels::Panel::Components::Component::Properties::Image


class Webui::Schematics::Panels::Panel::Components::Component::Properties::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf text; //type: string
        YLeaf link; //type: string

}; // Webui::Schematics::Panels::Panel::Components::Component::Properties::Link


class Webui::Schematics::Assets : public Entity
{
    public:
        Assets();
        ~Assets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Asset; //type: Webui::Schematics::Assets::Asset

        std::vector<std::shared_ptr<tailf_webui::Webui::Schematics::Assets::Asset> > asset_;
        
}; // Webui::Schematics::Assets


class Webui::Schematics::Assets::Asset : public Entity
{
    public:
        Asset();
        ~Asset();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf base_64_image; //type: string
        YLeaf type; //type: TypeEnum
        class TypeEnum;

}; // Webui::Schematics::Assets::Asset


class Webui::DataStores : public Entity
{
    public:
        DataStores();
        ~DataStores();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UserProfile; //type: Webui::DataStores::UserProfile
        class DataStore; //type: Webui::DataStores::DataStore
        class SavedQuery; //type: Webui::DataStores::SavedQuery

        std::vector<std::shared_ptr<tailf_webui::Webui::DataStores::DataStore> > data_store_;
        std::vector<std::shared_ptr<tailf_webui::Webui::DataStores::SavedQuery> > saved_query_;
        std::vector<std::shared_ptr<tailf_webui::Webui::DataStores::UserProfile> > user_profile_;
        
}; // Webui::DataStores


class Webui::DataStores::UserProfile : public Entity
{
    public:
        UserProfile();
        ~UserProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username; //type: string
        class Profile; //type: Webui::DataStores::UserProfile::Profile
        class SavedQuery; //type: Webui::DataStores::UserProfile::SavedQuery

        std::vector<std::shared_ptr<tailf_webui::Webui::DataStores::UserProfile::Profile> > profile_;
        std::vector<std::shared_ptr<tailf_webui::Webui::DataStores::UserProfile::SavedQuery> > saved_query_;
        
}; // Webui::DataStores::UserProfile


class Webui::DataStores::UserProfile::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        YLeaf value_; //type: string

}; // Webui::DataStores::UserProfile::Profile


class Webui::DataStores::UserProfile::SavedQuery : public Entity
{
    public:
        SavedQuery();
        ~SavedQuery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list_path; //type: string
        YLeaf name; //type: string
        YLeaf serialized_query; //type: string

}; // Webui::DataStores::UserProfile::SavedQuery


class Webui::DataStores::DataStore : public Entity
{
    public:
        DataStore();
        ~DataStore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        YLeaf value_; //type: string

}; // Webui::DataStores::DataStore


class Webui::DataStores::SavedQuery : public Entity
{
    public:
        SavedQuery();
        ~SavedQuery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list_path; //type: string
        YLeaf name; //type: string
        YLeaf serialized_query; //type: string

}; // Webui::DataStores::SavedQuery

class Webui::Schematics::Assets::Asset::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf jpeg;
        static const Enum::YLeaf png;
        static const Enum::YLeaf gif;

};


}
}

#endif /* _TAILF_WEBUI_ */

