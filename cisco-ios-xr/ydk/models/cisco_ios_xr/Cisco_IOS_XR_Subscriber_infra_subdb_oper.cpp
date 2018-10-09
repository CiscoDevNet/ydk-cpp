
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_Subscriber_infra_subdb_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Subscriber_infra_subdb_oper {

SubscriberDatabase::SubscriberDatabase()
    :
    nodes(std::make_shared<SubscriberDatabase::Nodes>())
{
    nodes->parent = this;

    yang_name = "subscriber-database"; yang_parent_name = "Cisco-IOS-XR-Subscriber-infra-subdb-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberDatabase::~SubscriberDatabase()
{
}

bool SubscriberDatabase::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SubscriberDatabase::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SubscriberDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Subscriber-infra-subdb-oper:subscriber-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SubscriberDatabase::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void SubscriberDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SubscriberDatabase::clone_ptr() const
{
    return std::make_shared<SubscriberDatabase>();
}

std::string SubscriberDatabase::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberDatabase::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberDatabase::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberDatabase::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "subscriber-database"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberDatabase::Nodes::~Nodes()
{
}

bool SubscriberDatabase::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberDatabase::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberDatabase::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Subscriber-infra-subdb-oper:subscriber-database/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberDatabase::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<SubscriberDatabase::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberDatabase::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberDatabase::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    association(std::make_shared<SubscriberDatabase::Nodes::Node::Association>())
    , summary(std::make_shared<SubscriberDatabase::Nodes::Node::Summary>())
    , session(std::make_shared<SubscriberDatabase::Nodes::Node::Session>())
{
    association->parent = this;
    summary->parent = this;
    session->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberDatabase::Nodes::Node::~Node()
{
}

bool SubscriberDatabase::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (association !=  nullptr && association->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool SubscriberDatabase::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string SubscriberDatabase::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Subscriber-infra-subdb-oper:subscriber-database/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberDatabase::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<SubscriberDatabase::Nodes::Node::Association>();
        }
        return association;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SubscriberDatabase::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<SubscriberDatabase::Nodes::Node::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberDatabase::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool SubscriberDatabase::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "summary" || name == "session" || name == "node-name")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Association::Association()
    :
    labels(std::make_shared<SubscriberDatabase::Nodes::Node::Association::Labels>())
{
    labels->parent = this;

    yang_name = "association"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Association::~Association()
{
}

bool SubscriberDatabase::Nodes::Node::Association::has_data() const
{
    if (is_presence_container) return true;
    return (labels !=  nullptr && labels->has_data());
}

bool SubscriberDatabase::Nodes::Node::Association::has_operation() const
{
    return is_set(yfilter)
	|| (labels !=  nullptr && labels->has_operation());
}

std::string SubscriberDatabase::Nodes::Node::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<SubscriberDatabase::Nodes::Node::Association::Labels>();
        }
        return labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::Nodes::Node::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberDatabase::Nodes::Node::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labels")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Association::Labels::Labels()
    :
    label(this, {"subscriber_label"})
{

    yang_name = "labels"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Association::Labels::~Labels()
{
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::has_operation() const
{
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberDatabase::Nodes::Node::Association::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Association::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Association::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        auto c = std::make_shared<SubscriberDatabase::Nodes::Node::Association::Labels::Label>();
        c->parent = this;
        label.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Association::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : label.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::Association::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::Nodes::Node::Association::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Association::Labels::Label::Label()
    :
    subscriber_label{YType::str, "subscriber-label"},
    interface_name{YType::str, "interface-name"},
    associations{YType::uint32, "associations"},
    varlist_id{YType::uint32, "varlist-id"}
        ,
    template_(std::make_shared<SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template>())
{
    template_->parent = this;

    yang_name = "label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Association::Labels::Label::~Label()
{
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_label.is_set
	|| interface_name.is_set
	|| associations.is_set
	|| varlist_id.is_set
	|| (template_ !=  nullptr && template_->has_data());
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(associations.yfilter)
	|| ydk::is_set(varlist_id.yfilter)
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string SubscriberDatabase::Nodes::Node::Association::Labels::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    ADD_KEY_TOKEN(subscriber_label, "subscriber-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Association::Labels::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_label.is_set || is_set(subscriber_label.yfilter)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (associations.is_set || is_set(associations.yfilter)) leaf_name_data.push_back(associations.get_name_leafdata());
    if (varlist_id.is_set || is_set(varlist_id.yfilter)) leaf_name_data.push_back(varlist_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Association::Labels::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Association::Labels::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::Association::Labels::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
        subscriber_label.value_namespace = name_space;
        subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "associations")
    {
        associations = value;
        associations.value_namespace = name_space;
        associations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "varlist-id")
    {
        varlist_id = value;
        varlist_id.value_namespace = name_space;
        varlist_id.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberDatabase::Nodes::Node::Association::Labels::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-label")
    {
        subscriber_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "associations")
    {
        associations.yfilter = yfilter;
    }
    if(value_path == "varlist-id")
    {
        varlist_id.yfilter = yfilter;
    }
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "subscriber-label" || name == "interface-name" || name == "associations" || name == "varlist-id")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::Template()
    :
    associated_template(this, {})
{

    yang_name = "template"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::~Template()
{
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<associated_template.len(); index++)
    {
        if(associated_template[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::has_operation() const
{
    for (std::size_t index=0; index<associated_template.len(); index++)
    {
        if(associated_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "associated-template")
    {
        auto c = std::make_shared<SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate>();
        c->parent = this;
        associated_template.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : associated_template.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "associated-template")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::AssociatedTemplate()
    :
    template_type{YType::enumeration, "template-type"},
    template_name{YType::str, "template-name"},
    varlist{YType::str, "varlist"}
{

    yang_name = "associated-template"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::~AssociatedTemplate()
{
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::has_data() const
{
    if (is_presence_container) return true;
    return template_type.is_set
	|| template_name.is_set
	|| varlist.is_set;
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_type.yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(varlist.yfilter);
}

std::string SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_type.is_set || is_set(template_type.yfilter)) leaf_name_data.push_back(template_type.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (varlist.is_set || is_set(varlist.yfilter)) leaf_name_data.push_back(varlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-type")
    {
        template_type = value;
        template_type.value_namespace = name_space;
        template_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "varlist")
    {
        varlist = value;
        varlist.value_namespace = name_space;
        varlist.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-type")
    {
        template_type.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "varlist")
    {
        varlist.yfilter = yfilter;
    }
}

bool SubscriberDatabase::Nodes::Node::Association::Labels::Label::Template::AssociatedTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template-type" || name == "template-name" || name == "varlist")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Summary::Summary()
    :
    assoc_db_entries{YType::uint32, "assoc-db-entries"},
    assoc_db_associations{YType::uint32, "assoc-db-associations"},
    derived_db_entries{YType::uint32, "derived-db-entries"},
    config_db_entries{YType::uint32, "config-db-entries"},
    interface_db_entries{YType::uint32, "interface-db-entries"},
    num_ipsub_dhcp{YType::uint32, "num-ipsub-dhcp"},
    num_ipsub_inband{YType::uint32, "num-ipsub-inband"},
    num_pppoe{YType::uint32, "num-pppoe"},
    subdb_obj_counts_by_type{YType::uint32, "subdb-obj-counts-by-type"},
    num_subscribers_in_state{YType::uint32, "num-subscribers-in-state"},
    num_transitions_through_state{YType::uint32, "num-transitions-through-state"}
{

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Summary::~Summary()
{
}

bool SubscriberDatabase::Nodes::Node::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : subdb_obj_counts_by_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : num_subscribers_in_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : num_transitions_through_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return assoc_db_entries.is_set
	|| assoc_db_associations.is_set
	|| derived_db_entries.is_set
	|| config_db_entries.is_set
	|| interface_db_entries.is_set
	|| num_ipsub_dhcp.is_set
	|| num_ipsub_inband.is_set
	|| num_pppoe.is_set;
}

bool SubscriberDatabase::Nodes::Node::Summary::has_operation() const
{
    for (auto const & leaf : subdb_obj_counts_by_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : num_subscribers_in_state.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : num_transitions_through_state.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(assoc_db_entries.yfilter)
	|| ydk::is_set(assoc_db_associations.yfilter)
	|| ydk::is_set(derived_db_entries.yfilter)
	|| ydk::is_set(config_db_entries.yfilter)
	|| ydk::is_set(interface_db_entries.yfilter)
	|| ydk::is_set(num_ipsub_dhcp.yfilter)
	|| ydk::is_set(num_ipsub_inband.yfilter)
	|| ydk::is_set(num_pppoe.yfilter)
	|| ydk::is_set(subdb_obj_counts_by_type.yfilter)
	|| ydk::is_set(num_subscribers_in_state.yfilter)
	|| ydk::is_set(num_transitions_through_state.yfilter);
}

std::string SubscriberDatabase::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assoc_db_entries.is_set || is_set(assoc_db_entries.yfilter)) leaf_name_data.push_back(assoc_db_entries.get_name_leafdata());
    if (assoc_db_associations.is_set || is_set(assoc_db_associations.yfilter)) leaf_name_data.push_back(assoc_db_associations.get_name_leafdata());
    if (derived_db_entries.is_set || is_set(derived_db_entries.yfilter)) leaf_name_data.push_back(derived_db_entries.get_name_leafdata());
    if (config_db_entries.is_set || is_set(config_db_entries.yfilter)) leaf_name_data.push_back(config_db_entries.get_name_leafdata());
    if (interface_db_entries.is_set || is_set(interface_db_entries.yfilter)) leaf_name_data.push_back(interface_db_entries.get_name_leafdata());
    if (num_ipsub_dhcp.is_set || is_set(num_ipsub_dhcp.yfilter)) leaf_name_data.push_back(num_ipsub_dhcp.get_name_leafdata());
    if (num_ipsub_inband.is_set || is_set(num_ipsub_inband.yfilter)) leaf_name_data.push_back(num_ipsub_inband.get_name_leafdata());
    if (num_pppoe.is_set || is_set(num_pppoe.yfilter)) leaf_name_data.push_back(num_pppoe.get_name_leafdata());

    auto subdb_obj_counts_by_type_name_datas = subdb_obj_counts_by_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subdb_obj_counts_by_type_name_datas.begin(), subdb_obj_counts_by_type_name_datas.end());
    auto num_subscribers_in_state_name_datas = num_subscribers_in_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_subscribers_in_state_name_datas.begin(), num_subscribers_in_state_name_datas.end());
    auto num_transitions_through_state_name_datas = num_transitions_through_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_transitions_through_state_name_datas.begin(), num_transitions_through_state_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberDatabase::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "assoc-db-entries")
    {
        assoc_db_entries = value;
        assoc_db_entries.value_namespace = name_space;
        assoc_db_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assoc-db-associations")
    {
        assoc_db_associations = value;
        assoc_db_associations.value_namespace = name_space;
        assoc_db_associations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "derived-db-entries")
    {
        derived_db_entries = value;
        derived_db_entries.value_namespace = name_space;
        derived_db_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-db-entries")
    {
        config_db_entries = value;
        config_db_entries.value_namespace = name_space;
        config_db_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-db-entries")
    {
        interface_db_entries = value;
        interface_db_entries.value_namespace = name_space;
        interface_db_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipsub-dhcp")
    {
        num_ipsub_dhcp = value;
        num_ipsub_dhcp.value_namespace = name_space;
        num_ipsub_dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ipsub-inband")
    {
        num_ipsub_inband = value;
        num_ipsub_inband.value_namespace = name_space;
        num_ipsub_inband.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pppoe")
    {
        num_pppoe = value;
        num_pppoe.value_namespace = name_space;
        num_pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subdb-obj-counts-by-type")
    {
        subdb_obj_counts_by_type.append(value);
    }
    if(value_path == "num-subscribers-in-state")
    {
        num_subscribers_in_state.append(value);
    }
    if(value_path == "num-transitions-through-state")
    {
        num_transitions_through_state.append(value);
    }
}

void SubscriberDatabase::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "assoc-db-entries")
    {
        assoc_db_entries.yfilter = yfilter;
    }
    if(value_path == "assoc-db-associations")
    {
        assoc_db_associations.yfilter = yfilter;
    }
    if(value_path == "derived-db-entries")
    {
        derived_db_entries.yfilter = yfilter;
    }
    if(value_path == "config-db-entries")
    {
        config_db_entries.yfilter = yfilter;
    }
    if(value_path == "interface-db-entries")
    {
        interface_db_entries.yfilter = yfilter;
    }
    if(value_path == "num-ipsub-dhcp")
    {
        num_ipsub_dhcp.yfilter = yfilter;
    }
    if(value_path == "num-ipsub-inband")
    {
        num_ipsub_inband.yfilter = yfilter;
    }
    if(value_path == "num-pppoe")
    {
        num_pppoe.yfilter = yfilter;
    }
    if(value_path == "subdb-obj-counts-by-type")
    {
        subdb_obj_counts_by_type.yfilter = yfilter;
    }
    if(value_path == "num-subscribers-in-state")
    {
        num_subscribers_in_state.yfilter = yfilter;
    }
    if(value_path == "num-transitions-through-state")
    {
        num_transitions_through_state.yfilter = yfilter;
    }
}

bool SubscriberDatabase::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assoc-db-entries" || name == "assoc-db-associations" || name == "derived-db-entries" || name == "config-db-entries" || name == "interface-db-entries" || name == "num-ipsub-dhcp" || name == "num-ipsub-inband" || name == "num-pppoe" || name == "subdb-obj-counts-by-type" || name == "num-subscribers-in-state" || name == "num-transitions-through-state")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Session::Session()
    :
    labels(std::make_shared<SubscriberDatabase::Nodes::Node::Session::Labels>())
{
    labels->parent = this;

    yang_name = "session"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Session::~Session()
{
}

bool SubscriberDatabase::Nodes::Node::Session::has_data() const
{
    if (is_presence_container) return true;
    return (labels !=  nullptr && labels->has_data());
}

bool SubscriberDatabase::Nodes::Node::Session::has_operation() const
{
    return is_set(yfilter)
	|| (labels !=  nullptr && labels->has_operation());
}

std::string SubscriberDatabase::Nodes::Node::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<SubscriberDatabase::Nodes::Node::Session::Labels>();
        }
        return labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::Nodes::Node::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberDatabase::Nodes::Node::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labels")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Session::Labels::Labels()
    :
    label(this, {"subscriber_label"})
{

    yang_name = "labels"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Session::Labels::~Labels()
{
}

bool SubscriberDatabase::Nodes::Node::Session::Labels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberDatabase::Nodes::Node::Session::Labels::has_operation() const
{
    for (std::size_t index=0; index<label.len(); index++)
    {
        if(label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberDatabase::Nodes::Node::Session::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Session::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Session::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        auto c = std::make_shared<SubscriberDatabase::Nodes::Node::Session::Labels::Label>();
        c->parent = this;
        label.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Session::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : label.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberDatabase::Nodes::Node::Session::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberDatabase::Nodes::Node::Session::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberDatabase::Nodes::Node::Session::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

SubscriberDatabase::Nodes::Node::Session::Labels::Label::Label()
    :
    subscriber_label{YType::str, "subscriber-label"},
    session_state{YType::enumeration, "session-state"},
    activate_request_id{YType::uint32, "activate-request-id"},
    transaction_id{YType::int32, "transaction-id"},
    produce_done_request_id{YType::uint32, "produce-done-request-id"},
    destroy_req_received{YType::boolean, "destroy-req-received"},
    destroy_request_id{YType::uint32, "destroy-request-id"},
    is_config_changed{YType::boolean, "is-config-changed"},
    is_creator_gone{YType::boolean, "is-creator-gone"},
    is_delete_notify_done{YType::boolean, "is-delete-notify-done"},
    add_modify_done{YType::boolean, "add-modify-done"},
    is_rollback_needed{YType::boolean, "is-rollback-needed"},
    is_rollback_in_progress{YType::boolean, "is-rollback-in-progress"},
    is_server_restart_apply{YType::boolean, "is-server-restart-apply"},
    is_rollback_performed{YType::boolean, "is-rollback-performed"},
    repl_pending{YType::boolean, "repl-pending"},
    activate_timer_running{YType::boolean, "activate-timer-running"},
    apply_timer_running{YType::boolean, "apply-timer-running"},
    event_queue_size{YType::boolean, "event-queue-size"},
    restarts{YType::str, "restarts"},
    template_interface_id{YType::uint32, "template-interface-id"}
{

    yang_name = "label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberDatabase::Nodes::Node::Session::Labels::Label::~Label()
{
}

bool SubscriberDatabase::Nodes::Node::Session::Labels::Label::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_label.is_set
	|| session_state.is_set
	|| activate_request_id.is_set
	|| transaction_id.is_set
	|| produce_done_request_id.is_set
	|| destroy_req_received.is_set
	|| destroy_request_id.is_set
	|| is_config_changed.is_set
	|| is_creator_gone.is_set
	|| is_delete_notify_done.is_set
	|| add_modify_done.is_set
	|| is_rollback_needed.is_set
	|| is_rollback_in_progress.is_set
	|| is_server_restart_apply.is_set
	|| is_rollback_performed.is_set
	|| repl_pending.is_set
	|| activate_timer_running.is_set
	|| apply_timer_running.is_set
	|| event_queue_size.is_set
	|| restarts.is_set
	|| template_interface_id.is_set;
}

bool SubscriberDatabase::Nodes::Node::Session::Labels::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_label.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(activate_request_id.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| ydk::is_set(produce_done_request_id.yfilter)
	|| ydk::is_set(destroy_req_received.yfilter)
	|| ydk::is_set(destroy_request_id.yfilter)
	|| ydk::is_set(is_config_changed.yfilter)
	|| ydk::is_set(is_creator_gone.yfilter)
	|| ydk::is_set(is_delete_notify_done.yfilter)
	|| ydk::is_set(add_modify_done.yfilter)
	|| ydk::is_set(is_rollback_needed.yfilter)
	|| ydk::is_set(is_rollback_in_progress.yfilter)
	|| ydk::is_set(is_server_restart_apply.yfilter)
	|| ydk::is_set(is_rollback_performed.yfilter)
	|| ydk::is_set(repl_pending.yfilter)
	|| ydk::is_set(activate_timer_running.yfilter)
	|| ydk::is_set(apply_timer_running.yfilter)
	|| ydk::is_set(event_queue_size.yfilter)
	|| ydk::is_set(restarts.yfilter)
	|| ydk::is_set(template_interface_id.yfilter);
}

std::string SubscriberDatabase::Nodes::Node::Session::Labels::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    ADD_KEY_TOKEN(subscriber_label, "subscriber-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberDatabase::Nodes::Node::Session::Labels::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_label.is_set || is_set(subscriber_label.yfilter)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (activate_request_id.is_set || is_set(activate_request_id.yfilter)) leaf_name_data.push_back(activate_request_id.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (produce_done_request_id.is_set || is_set(produce_done_request_id.yfilter)) leaf_name_data.push_back(produce_done_request_id.get_name_leafdata());
    if (destroy_req_received.is_set || is_set(destroy_req_received.yfilter)) leaf_name_data.push_back(destroy_req_received.get_name_leafdata());
    if (destroy_request_id.is_set || is_set(destroy_request_id.yfilter)) leaf_name_data.push_back(destroy_request_id.get_name_leafdata());
    if (is_config_changed.is_set || is_set(is_config_changed.yfilter)) leaf_name_data.push_back(is_config_changed.get_name_leafdata());
    if (is_creator_gone.is_set || is_set(is_creator_gone.yfilter)) leaf_name_data.push_back(is_creator_gone.get_name_leafdata());
    if (is_delete_notify_done.is_set || is_set(is_delete_notify_done.yfilter)) leaf_name_data.push_back(is_delete_notify_done.get_name_leafdata());
    if (add_modify_done.is_set || is_set(add_modify_done.yfilter)) leaf_name_data.push_back(add_modify_done.get_name_leafdata());
    if (is_rollback_needed.is_set || is_set(is_rollback_needed.yfilter)) leaf_name_data.push_back(is_rollback_needed.get_name_leafdata());
    if (is_rollback_in_progress.is_set || is_set(is_rollback_in_progress.yfilter)) leaf_name_data.push_back(is_rollback_in_progress.get_name_leafdata());
    if (is_server_restart_apply.is_set || is_set(is_server_restart_apply.yfilter)) leaf_name_data.push_back(is_server_restart_apply.get_name_leafdata());
    if (is_rollback_performed.is_set || is_set(is_rollback_performed.yfilter)) leaf_name_data.push_back(is_rollback_performed.get_name_leafdata());
    if (repl_pending.is_set || is_set(repl_pending.yfilter)) leaf_name_data.push_back(repl_pending.get_name_leafdata());
    if (activate_timer_running.is_set || is_set(activate_timer_running.yfilter)) leaf_name_data.push_back(activate_timer_running.get_name_leafdata());
    if (apply_timer_running.is_set || is_set(apply_timer_running.yfilter)) leaf_name_data.push_back(apply_timer_running.get_name_leafdata());
    if (event_queue_size.is_set || is_set(event_queue_size.yfilter)) leaf_name_data.push_back(event_queue_size.get_name_leafdata());
    if (restarts.is_set || is_set(restarts.yfilter)) leaf_name_data.push_back(restarts.get_name_leafdata());
    if (template_interface_id.is_set || is_set(template_interface_id.yfilter)) leaf_name_data.push_back(template_interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberDatabase::Nodes::Node::Session::Labels::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberDatabase::Nodes::Node::Session::Labels::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberDatabase::Nodes::Node::Session::Labels::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
        subscriber_label.value_namespace = name_space;
        subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-request-id")
    {
        activate_request_id = value;
        activate_request_id.value_namespace = name_space;
        activate_request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "produce-done-request-id")
    {
        produce_done_request_id = value;
        produce_done_request_id.value_namespace = name_space;
        produce_done_request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destroy-req-received")
    {
        destroy_req_received = value;
        destroy_req_received.value_namespace = name_space;
        destroy_req_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destroy-request-id")
    {
        destroy_request_id = value;
        destroy_request_id.value_namespace = name_space;
        destroy_request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-changed")
    {
        is_config_changed = value;
        is_config_changed.value_namespace = name_space;
        is_config_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-creator-gone")
    {
        is_creator_gone = value;
        is_creator_gone.value_namespace = name_space;
        is_creator_gone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delete-notify-done")
    {
        is_delete_notify_done = value;
        is_delete_notify_done.value_namespace = name_space;
        is_delete_notify_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-modify-done")
    {
        add_modify_done = value;
        add_modify_done.value_namespace = name_space;
        add_modify_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rollback-needed")
    {
        is_rollback_needed = value;
        is_rollback_needed.value_namespace = name_space;
        is_rollback_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rollback-in-progress")
    {
        is_rollback_in_progress = value;
        is_rollback_in_progress.value_namespace = name_space;
        is_rollback_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-server-restart-apply")
    {
        is_server_restart_apply = value;
        is_server_restart_apply.value_namespace = name_space;
        is_server_restart_apply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rollback-performed")
    {
        is_rollback_performed = value;
        is_rollback_performed.value_namespace = name_space;
        is_rollback_performed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repl-pending")
    {
        repl_pending = value;
        repl_pending.value_namespace = name_space;
        repl_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-timer-running")
    {
        activate_timer_running = value;
        activate_timer_running.value_namespace = name_space;
        activate_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-timer-running")
    {
        apply_timer_running = value;
        apply_timer_running.value_namespace = name_space;
        apply_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-queue-size")
    {
        event_queue_size = value;
        event_queue_size.value_namespace = name_space;
        event_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restarts")
    {
        restarts = value;
        restarts.value_namespace = name_space;
        restarts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-interface-id")
    {
        template_interface_id = value;
        template_interface_id.value_namespace = name_space;
        template_interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberDatabase::Nodes::Node::Session::Labels::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-label")
    {
        subscriber_label.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "activate-request-id")
    {
        activate_request_id.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
    if(value_path == "produce-done-request-id")
    {
        produce_done_request_id.yfilter = yfilter;
    }
    if(value_path == "destroy-req-received")
    {
        destroy_req_received.yfilter = yfilter;
    }
    if(value_path == "destroy-request-id")
    {
        destroy_request_id.yfilter = yfilter;
    }
    if(value_path == "is-config-changed")
    {
        is_config_changed.yfilter = yfilter;
    }
    if(value_path == "is-creator-gone")
    {
        is_creator_gone.yfilter = yfilter;
    }
    if(value_path == "is-delete-notify-done")
    {
        is_delete_notify_done.yfilter = yfilter;
    }
    if(value_path == "add-modify-done")
    {
        add_modify_done.yfilter = yfilter;
    }
    if(value_path == "is-rollback-needed")
    {
        is_rollback_needed.yfilter = yfilter;
    }
    if(value_path == "is-rollback-in-progress")
    {
        is_rollback_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-server-restart-apply")
    {
        is_server_restart_apply.yfilter = yfilter;
    }
    if(value_path == "is-rollback-performed")
    {
        is_rollback_performed.yfilter = yfilter;
    }
    if(value_path == "repl-pending")
    {
        repl_pending.yfilter = yfilter;
    }
    if(value_path == "activate-timer-running")
    {
        activate_timer_running.yfilter = yfilter;
    }
    if(value_path == "apply-timer-running")
    {
        apply_timer_running.yfilter = yfilter;
    }
    if(value_path == "event-queue-size")
    {
        event_queue_size.yfilter = yfilter;
    }
    if(value_path == "restarts")
    {
        restarts.yfilter = yfilter;
    }
    if(value_path == "template-interface-id")
    {
        template_interface_id.yfilter = yfilter;
    }
}

bool SubscriberDatabase::Nodes::Node::Session::Labels::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-label" || name == "session-state" || name == "activate-request-id" || name == "transaction-id" || name == "produce-done-request-id" || name == "destroy-req-received" || name == "destroy-request-id" || name == "is-config-changed" || name == "is-creator-gone" || name == "is-delete-notify-done" || name == "add-modify-done" || name == "is-rollback-needed" || name == "is-rollback-in-progress" || name == "is-server-restart-apply" || name == "is-rollback-performed" || name == "repl-pending" || name == "activate-timer-running" || name == "apply-timer-running" || name == "event-queue-size" || name == "restarts" || name == "template-interface-id")
        return true;
    return false;
}

const Enum::YLeaf SubdbObjectTypeData::user_profile {1, "user-profile"};
const Enum::YLeaf SubdbObjectTypeData::service_profile {2, "service-profile"};
const Enum::YLeaf SubdbObjectTypeData::subscriber_service {3, "subscriber-service"};
const Enum::YLeaf SubdbObjectTypeData::ppp {4, "ppp"};
const Enum::YLeaf SubdbObjectTypeData::ip_subscriber {5, "ip-subscriber"};

const Enum::YLeaf SessionState::init {1, "init"};
const Enum::YLeaf SessionState::destroy {2, "destroy"};
const Enum::YLeaf SessionState::config_generate {3, "config-generate"};
const Enum::YLeaf SessionState::feature_registration_wait {4, "feature-registration-wait"};
const Enum::YLeaf SessionState::config_apply {5, "config-apply"};
const Enum::YLeaf SessionState::config_done {6, "config-done"};
const Enum::YLeaf SessionState::config_removed {7, "config-removed"};
const Enum::YLeaf SessionState::config_error {8, "config-error"};
const Enum::YLeaf SessionState::error {9, "error"};
const Enum::YLeaf SessionState::sync {11, "sync"};


}
}

