
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_webui.hpp"

namespace ydk {
namespace tailf_webui {

Webui::Webui()
    :
    data_stores_(std::make_shared<Webui::DataStores>())
	,schematics_(std::make_shared<Webui::Schematics>())
{
    data_stores_->parent = this;

    schematics_->parent = this;

    yang_name = "webui"; yang_parent_name = "tailf-webui";
}

Webui::~Webui()
{
}

bool Webui::has_data() const
{
    return (data_stores_ !=  nullptr && data_stores_->has_data())
	|| (schematics_ !=  nullptr && schematics_->has_data());
}

bool Webui::has_operation() const
{
    return is_set(operation)
	|| (data_stores_ !=  nullptr && data_stores_->has_operation())
	|| (schematics_ !=  nullptr && schematics_->has_operation());
}

std::string Webui::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-webui:webui";

    return path_buffer.str();

}

const EntityPath Webui::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-stores")
    {
        if(data_stores_ == nullptr)
        {
            data_stores_ = std::make_shared<Webui::DataStores>();
        }
        return data_stores_;
    }

    if(child_yang_name == "schematics")
    {
        if(schematics_ == nullptr)
        {
            schematics_ = std::make_shared<Webui::Schematics>();
        }
        return schematics_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_stores_ != nullptr)
    {
        children["data-stores"] = data_stores_;
    }

    if(schematics_ != nullptr)
    {
        children["schematics"] = schematics_;
    }

    return children;
}

void Webui::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Webui::clone_ptr() const
{
    return std::make_shared<Webui>();
}

std::string Webui::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Webui::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Webui::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Webui::Schematics::Schematics()
    :
    assets_(std::make_shared<Webui::Schematics::Assets>())
	,panels_(std::make_shared<Webui::Schematics::Panels>())
{
    assets_->parent = this;

    panels_->parent = this;

    yang_name = "schematics"; yang_parent_name = "webui";
}

Webui::Schematics::~Schematics()
{
}

bool Webui::Schematics::has_data() const
{
    return (assets_ !=  nullptr && assets_->has_data())
	|| (panels_ !=  nullptr && panels_->has_data());
}

bool Webui::Schematics::has_operation() const
{
    return is_set(operation)
	|| (assets_ !=  nullptr && assets_->has_operation())
	|| (panels_ !=  nullptr && panels_->has_operation());
}

std::string Webui::Schematics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schematics";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assets")
    {
        if(assets_ == nullptr)
        {
            assets_ = std::make_shared<Webui::Schematics::Assets>();
        }
        return assets_;
    }

    if(child_yang_name == "panels")
    {
        if(panels_ == nullptr)
        {
            panels_ = std::make_shared<Webui::Schematics::Panels>();
        }
        return panels_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(assets_ != nullptr)
    {
        children["assets"] = assets_;
    }

    if(panels_ != nullptr)
    {
        children["panels"] = panels_;
    }

    return children;
}

void Webui::Schematics::set_value(const std::string & value_path, std::string value)
{
}

Webui::Schematics::Panels::Panels()
{
    yang_name = "panels"; yang_parent_name = "schematics";
}

Webui::Schematics::Panels::~Panels()
{
}

bool Webui::Schematics::Panels::has_data() const
{
    for (std::size_t index=0; index<panel_.size(); index++)
    {
        if(panel_[index]->has_data())
            return true;
    }
    return false;
}

bool Webui::Schematics::Panels::has_operation() const
{
    for (std::size_t index=0; index<panel_.size(); index++)
    {
        if(panel_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Webui::Schematics::Panels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "panels";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/schematics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "panel")
    {
        for(auto const & c : panel_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::Schematics::Panels::Panel>();
        c->parent = this;
        panel_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : panel_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Webui::Schematics::Panels::set_value(const std::string & value_path, std::string value)
{
}

Webui::Schematics::Panels::Panel::Panel()
    :
    name{YType::str, "name"}
    	,
    components_(std::make_shared<Webui::Schematics::Panels::Panel::Components>())
	,properties_(std::make_shared<Webui::Schematics::Panels::Panel::Properties>())
{
    components_->parent = this;

    properties_->parent = this;

    yang_name = "panel"; yang_parent_name = "panels";
}

Webui::Schematics::Panels::Panel::~Panel()
{
}

bool Webui::Schematics::Panels::Panel::has_data() const
{
    return name.is_set
	|| (components_ !=  nullptr && components_->has_data())
	|| (properties_ !=  nullptr && properties_->has_data());
}

bool Webui::Schematics::Panels::Panel::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (components_ !=  nullptr && components_->has_operation())
	|| (properties_ !=  nullptr && properties_->has_operation());
}

std::string Webui::Schematics::Panels::Panel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "panel" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/schematics/panels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "components")
    {
        if(components_ == nullptr)
        {
            components_ = std::make_shared<Webui::Schematics::Panels::Panel::Components>();
        }
        return components_;
    }

    if(child_yang_name == "properties")
    {
        if(properties_ == nullptr)
        {
            properties_ = std::make_shared<Webui::Schematics::Panels::Panel::Properties>();
        }
        return properties_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(components_ != nullptr)
    {
        children["components"] = components_;
    }

    if(properties_ != nullptr)
    {
        children["properties"] = properties_;
    }

    return children;
}

void Webui::Schematics::Panels::Panel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Webui::Schematics::Panels::Panel::Properties::Properties()
    :
    description{YType::str, "description"},
    height{YType::uint16, "height"},
    title{YType::str, "title"},
    width{YType::uint16, "width"}
{
    yang_name = "properties"; yang_parent_name = "panel";
}

Webui::Schematics::Panels::Panel::Properties::~Properties()
{
}

bool Webui::Schematics::Panels::Panel::Properties::has_data() const
{
    return description.is_set
	|| height.is_set
	|| title.is_set
	|| width.is_set;
}

bool Webui::Schematics::Panels::Panel::Properties::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(height.operation)
	|| is_set(title.operation)
	|| is_set(width.operation);
}

std::string Webui::Schematics::Panels::Panel::Properties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "properties";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::Properties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Properties' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (height.is_set || is_set(height.operation)) leaf_name_data.push_back(height.get_name_leafdata());
    if (title.is_set || is_set(title.operation)) leaf_name_data.push_back(title.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::Properties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::Properties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::Schematics::Panels::Panel::Properties::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "height")
    {
        height = value;
    }
    if(value_path == "title")
    {
        title = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

Webui::Schematics::Panels::Panel::Components::Components()
{
    yang_name = "components"; yang_parent_name = "panel";
}

Webui::Schematics::Panels::Panel::Components::~Components()
{
}

bool Webui::Schematics::Panels::Panel::Components::has_data() const
{
    for (std::size_t index=0; index<component_.size(); index++)
    {
        if(component_[index]->has_data())
            return true;
    }
    return false;
}

bool Webui::Schematics::Panels::Panel::Components::has_operation() const
{
    for (std::size_t index=0; index<component_.size(); index++)
    {
        if(component_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Webui::Schematics::Panels::Panel::Components::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "components";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::Components::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Components' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::Components::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component")
    {
        for(auto const & c : component_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::Schematics::Panels::Panel::Components::Component>();
        c->parent = this;
        component_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::Components::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : component_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Webui::Schematics::Panels::Panel::Components::set_value(const std::string & value_path, std::string value)
{
}

Webui::Schematics::Panels::Panel::Components::Component::Component()
    :
    id{YType::str, "id"}
    	,
    properties_(std::make_shared<Webui::Schematics::Panels::Panel::Components::Component::Properties>())
{
    properties_->parent = this;

    yang_name = "component"; yang_parent_name = "components";
}

Webui::Schematics::Panels::Panel::Components::Component::~Component()
{
}

bool Webui::Schematics::Panels::Panel::Components::Component::has_data() const
{
    return id.is_set
	|| (properties_ !=  nullptr && properties_->has_data());
}

bool Webui::Schematics::Panels::Panel::Components::Component::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (properties_ !=  nullptr && properties_->has_operation());
}

std::string Webui::Schematics::Panels::Panel::Components::Component::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::Components::Component::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Component' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::Components::Component::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "properties")
    {
        if(properties_ == nullptr)
        {
            properties_ = std::make_shared<Webui::Schematics::Panels::Panel::Components::Component::Properties>();
        }
        return properties_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::Components::Component::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(properties_ != nullptr)
    {
        children["properties"] = properties_;
    }

    return children;
}

void Webui::Schematics::Panels::Panel::Components::Component::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Webui::Schematics::Panels::Panel::Components::Component::Properties::Properties()
    :
    height{YType::uint16, "height"},
    left{YType::uint16, "left"},
    top{YType::uint16, "top"},
    width{YType::uint16, "width"},
    z_index{YType::int16, "z-index"}
    	,
    image_(std::make_shared<Webui::Schematics::Panels::Panel::Components::Component::Properties::Image>())
	,link_(std::make_shared<Webui::Schematics::Panels::Panel::Components::Component::Properties::Link>())
{
    image_->parent = this;

    link_->parent = this;

    yang_name = "properties"; yang_parent_name = "component";
}

Webui::Schematics::Panels::Panel::Components::Component::Properties::~Properties()
{
}

bool Webui::Schematics::Panels::Panel::Components::Component::Properties::has_data() const
{
    return height.is_set
	|| left.is_set
	|| top.is_set
	|| width.is_set
	|| z_index.is_set
	|| (image_ !=  nullptr && image_->has_data())
	|| (link_ !=  nullptr && link_->has_data());
}

bool Webui::Schematics::Panels::Panel::Components::Component::Properties::has_operation() const
{
    return is_set(operation)
	|| is_set(height.operation)
	|| is_set(left.operation)
	|| is_set(top.operation)
	|| is_set(width.operation)
	|| is_set(z_index.operation)
	|| (image_ !=  nullptr && image_->has_operation())
	|| (link_ !=  nullptr && link_->has_operation());
}

std::string Webui::Schematics::Panels::Panel::Components::Component::Properties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "properties";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::Components::Component::Properties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Properties' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.operation)) leaf_name_data.push_back(height.get_name_leafdata());
    if (left.is_set || is_set(left.operation)) leaf_name_data.push_back(left.get_name_leafdata());
    if (top.is_set || is_set(top.operation)) leaf_name_data.push_back(top.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());
    if (z_index.is_set || is_set(z_index.operation)) leaf_name_data.push_back(z_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::Components::Component::Properties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "image")
    {
        if(image_ == nullptr)
        {
            image_ = std::make_shared<Webui::Schematics::Panels::Panel::Components::Component::Properties::Image>();
        }
        return image_;
    }

    if(child_yang_name == "link")
    {
        if(link_ == nullptr)
        {
            link_ = std::make_shared<Webui::Schematics::Panels::Panel::Components::Component::Properties::Link>();
        }
        return link_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::Components::Component::Properties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(image_ != nullptr)
    {
        children["image"] = image_;
    }

    if(link_ != nullptr)
    {
        children["link"] = link_;
    }

    return children;
}

void Webui::Schematics::Panels::Panel::Components::Component::Properties::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "height")
    {
        height = value;
    }
    if(value_path == "left")
    {
        left = value;
    }
    if(value_path == "top")
    {
        top = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
    if(value_path == "z-index")
    {
        z_index = value;
    }
}

Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::Image()
    :
    image{YType::str, "image"}
{
    yang_name = "image"; yang_parent_name = "properties";
}

Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::~Image()
{
}

bool Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::has_data() const
{
    return image.is_set;
}

bool Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::has_operation() const
{
    return is_set(operation)
	|| is_set(image.operation);
}

std::string Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "image";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Image' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (image.is_set || is_set(image.operation)) leaf_name_data.push_back(image.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::Schematics::Panels::Panel::Components::Component::Properties::Image::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "image")
    {
        image = value;
    }
}

Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::Link()
    :
    link{YType::str, "link"},
    text{YType::str, "text"}
{
    yang_name = "link"; yang_parent_name = "properties";
}

Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::~Link()
{
}

bool Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::has_data() const
{
    return link.is_set
	|| text.is_set;
}

bool Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link.operation)
	|| is_set(text.operation);
}

std::string Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());
    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::Schematics::Panels::Panel::Components::Component::Properties::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
    if(value_path == "text")
    {
        text = value;
    }
}

Webui::Schematics::Assets::Assets()
{
    yang_name = "assets"; yang_parent_name = "schematics";
}

Webui::Schematics::Assets::~Assets()
{
}

bool Webui::Schematics::Assets::has_data() const
{
    for (std::size_t index=0; index<asset_.size(); index++)
    {
        if(asset_[index]->has_data())
            return true;
    }
    return false;
}

bool Webui::Schematics::Assets::has_operation() const
{
    for (std::size_t index=0; index<asset_.size(); index++)
    {
        if(asset_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Webui::Schematics::Assets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assets";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Assets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/schematics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Assets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asset")
    {
        for(auto const & c : asset_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::Schematics::Assets::Asset>();
        c->parent = this;
        asset_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Assets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : asset_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Webui::Schematics::Assets::set_value(const std::string & value_path, std::string value)
{
}

Webui::Schematics::Assets::Asset::Asset()
    :
    name{YType::str, "name"},
    base_64_image{YType::str, "base-64-image"},
    type{YType::enumeration, "type"}
{
    yang_name = "asset"; yang_parent_name = "assets";
}

Webui::Schematics::Assets::Asset::~Asset()
{
}

bool Webui::Schematics::Assets::Asset::has_data() const
{
    return name.is_set
	|| base_64_image.is_set
	|| type.is_set;
}

bool Webui::Schematics::Assets::Asset::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(base_64_image.operation)
	|| is_set(type.operation);
}

std::string Webui::Schematics::Assets::Asset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asset" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Webui::Schematics::Assets::Asset::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/schematics/assets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (base_64_image.is_set || is_set(base_64_image.operation)) leaf_name_data.push_back(base_64_image.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::Schematics::Assets::Asset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::Schematics::Assets::Asset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::Schematics::Assets::Asset::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "base-64-image")
    {
        base_64_image = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Webui::DataStores::DataStores()
{
    yang_name = "data-stores"; yang_parent_name = "webui";
}

Webui::DataStores::~DataStores()
{
}

bool Webui::DataStores::has_data() const
{
    for (std::size_t index=0; index<data_store_.size(); index++)
    {
        if(data_store_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<saved_query_.size(); index++)
    {
        if(saved_query_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<user_profile_.size(); index++)
    {
        if(user_profile_[index]->has_data())
            return true;
    }
    return false;
}

bool Webui::DataStores::has_operation() const
{
    for (std::size_t index=0; index<data_store_.size(); index++)
    {
        if(data_store_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<saved_query_.size(); index++)
    {
        if(saved_query_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<user_profile_.size(); index++)
    {
        if(user_profile_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Webui::DataStores::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-stores";

    return path_buffer.str();

}

const EntityPath Webui::DataStores::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::DataStores::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-store")
    {
        for(auto const & c : data_store_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::DataStores::DataStore>();
        c->parent = this;
        data_store_.push_back(c);
        return c;
    }

    if(child_yang_name == "saved-query")
    {
        for(auto const & c : saved_query_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::DataStores::SavedQuery>();
        c->parent = this;
        saved_query_.push_back(c);
        return c;
    }

    if(child_yang_name == "user-profile")
    {
        for(auto const & c : user_profile_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::DataStores::UserProfile>();
        c->parent = this;
        user_profile_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::DataStores::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : data_store_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : saved_query_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : user_profile_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Webui::DataStores::set_value(const std::string & value_path, std::string value)
{
}

Webui::DataStores::UserProfile::UserProfile()
    :
    username{YType::str, "username"}
{
    yang_name = "user-profile"; yang_parent_name = "data-stores";
}

Webui::DataStores::UserProfile::~UserProfile()
{
}

bool Webui::DataStores::UserProfile::has_data() const
{
    for (std::size_t index=0; index<profile_.size(); index++)
    {
        if(profile_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<saved_query_.size(); index++)
    {
        if(saved_query_[index]->has_data())
            return true;
    }
    return username.is_set;
}

bool Webui::DataStores::UserProfile::has_operation() const
{
    for (std::size_t index=0; index<profile_.size(); index++)
    {
        if(profile_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<saved_query_.size(); index++)
    {
        if(saved_query_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(username.operation);
}

std::string Webui::DataStores::UserProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-profile" <<"[username='" <<username <<"']";

    return path_buffer.str();

}

const EntityPath Webui::DataStores::UserProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/data-stores/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::DataStores::UserProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::DataStores::UserProfile::Profile>();
        c->parent = this;
        profile_.push_back(c);
        return c;
    }

    if(child_yang_name == "saved-query")
    {
        for(auto const & c : saved_query_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Webui::DataStores::UserProfile::SavedQuery>();
        c->parent = this;
        saved_query_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::DataStores::UserProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : saved_query_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Webui::DataStores::UserProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
}

Webui::DataStores::UserProfile::Profile::Profile()
    :
    key{YType::str, "key"},
    value_{YType::str, "value"}
{
    yang_name = "profile"; yang_parent_name = "user-profile";
}

Webui::DataStores::UserProfile::Profile::~Profile()
{
}

bool Webui::DataStores::UserProfile::Profile::has_data() const
{
    return key.is_set
	|| value_.is_set;
}

bool Webui::DataStores::UserProfile::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(value_.operation);
}

std::string Webui::DataStores::UserProfile::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[key='" <<key <<"']";

    return path_buffer.str();

}

const EntityPath Webui::DataStores::UserProfile::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::DataStores::UserProfile::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::DataStores::UserProfile::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::DataStores::UserProfile::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Webui::DataStores::UserProfile::SavedQuery::SavedQuery()
    :
    list_path{YType::str, "list-path"},
    name{YType::str, "name"},
    serialized_query{YType::str, "serialized-query"}
{
    yang_name = "saved-query"; yang_parent_name = "user-profile";
}

Webui::DataStores::UserProfile::SavedQuery::~SavedQuery()
{
}

bool Webui::DataStores::UserProfile::SavedQuery::has_data() const
{
    return list_path.is_set
	|| name.is_set
	|| serialized_query.is_set;
}

bool Webui::DataStores::UserProfile::SavedQuery::has_operation() const
{
    return is_set(operation)
	|| is_set(list_path.operation)
	|| is_set(name.operation)
	|| is_set(serialized_query.operation);
}

std::string Webui::DataStores::UserProfile::SavedQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saved-query" <<"[list-path='" <<list_path <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Webui::DataStores::UserProfile::SavedQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SavedQuery' in tailf_webui cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list_path.is_set || is_set(list_path.operation)) leaf_name_data.push_back(list_path.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serialized_query.is_set || is_set(serialized_query.operation)) leaf_name_data.push_back(serialized_query.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::DataStores::UserProfile::SavedQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::DataStores::UserProfile::SavedQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::DataStores::UserProfile::SavedQuery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list-path")
    {
        list_path = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serialized-query")
    {
        serialized_query = value;
    }
}

Webui::DataStores::DataStore::DataStore()
    :
    key{YType::str, "key"},
    value_{YType::str, "value"}
{
    yang_name = "data-store"; yang_parent_name = "data-stores";
}

Webui::DataStores::DataStore::~DataStore()
{
}

bool Webui::DataStores::DataStore::has_data() const
{
    return key.is_set
	|| value_.is_set;
}

bool Webui::DataStores::DataStore::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(value_.operation);
}

std::string Webui::DataStores::DataStore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-store" <<"[key='" <<key <<"']";

    return path_buffer.str();

}

const EntityPath Webui::DataStores::DataStore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/data-stores/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::DataStores::DataStore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::DataStores::DataStore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::DataStores::DataStore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Webui::DataStores::SavedQuery::SavedQuery()
    :
    list_path{YType::str, "list-path"},
    name{YType::str, "name"},
    serialized_query{YType::str, "serialized-query"}
{
    yang_name = "saved-query"; yang_parent_name = "data-stores";
}

Webui::DataStores::SavedQuery::~SavedQuery()
{
}

bool Webui::DataStores::SavedQuery::has_data() const
{
    return list_path.is_set
	|| name.is_set
	|| serialized_query.is_set;
}

bool Webui::DataStores::SavedQuery::has_operation() const
{
    return is_set(operation)
	|| is_set(list_path.operation)
	|| is_set(name.operation)
	|| is_set(serialized_query.operation);
}

std::string Webui::DataStores::SavedQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saved-query" <<"[list-path='" <<list_path <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Webui::DataStores::SavedQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-webui:webui/data-stores/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list_path.is_set || is_set(list_path.operation)) leaf_name_data.push_back(list_path.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (serialized_query.is_set || is_set(serialized_query.operation)) leaf_name_data.push_back(serialized_query.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Webui::DataStores::SavedQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Webui::DataStores::SavedQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Webui::DataStores::SavedQuery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list-path")
    {
        list_path = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "serialized-query")
    {
        serialized_query = value;
    }
}

const Enum::YLeaf Webui::Schematics::Assets::Asset::TypeEnum::jpeg {0, "jpeg"};
const Enum::YLeaf Webui::Schematics::Assets::Asset::TypeEnum::png {1, "png"};
const Enum::YLeaf Webui::Schematics::Assets::Asset::TypeEnum::gif {2, "gif"};


}
}

